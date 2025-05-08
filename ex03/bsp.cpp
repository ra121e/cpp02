/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:18:45 by athonda           #+#    #+#             */
/*   Updated: 2025/05/08 10:09:47 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	vectorOperation(Point a, Point b, Point p)
{
	t_vec	ab;
	t_vec	leftNormalAb;
	t_vec	ap;
	Fixed	dot;

	ab.x = b.getX() - a.getX();
	ab.y = b.getY() - a.getY();
	leftNormalAb.x = ab.y * (-1);
	leftNormalAb.y = ab.x;
	ap.x = p.getX() - a.getX();
	ap.y = p.getY() - a.getY();
	dot = ap.x * leftNormalAb.x + ap.y * leftNormalAb.y;
	return (dot);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	side1 = vectorOperation(a, b, point);
	Fixed	side2 = vectorOperation(b, c, point);
	Fixed	side3 = vectorOperation(c, a, point);

	if (side1 > 0 && side2 > 0 && side3 > 0)
		return (true);
	else if (side1 < 0 && side2 < 0 && side3 < 0)
		return (true);
	else
		return (false);
}
