/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:39:54 by athonda           #+#    #+#             */
/*   Updated: 2025/05/08 10:11:16 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

typedef struct s_vec	t_vec;

class Point
{
public:
	Point();
	Point(const float x, const float y);
	Point(Point &other);
	Point(Point const &other);
	~Point();

	Fixed	getX(void) const;
	Fixed	getY(void) const;

private:
	Point	&operator=(const Point &other);
	const Fixed	x;
	const Fixed	y;
};

struct s_vec
{
	Fixed	x;
	Fixed	y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);