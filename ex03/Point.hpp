/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:39:54 by athonda           #+#    #+#             */
/*   Updated: 2025/05/06 22:46:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(Point &other);
	~Point();

	Fixed	getX(void);
	Fixed	getY(void);

private:
	Point	&operator=(const Point &other);
	const Fixed	x;
	const Fixed	y;
};