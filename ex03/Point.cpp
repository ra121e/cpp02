/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:54:57 by athonda           #+#    #+#             */
/*   Updated: 2025/05/08 10:08:49 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :
	x(0),
	y(0)
{}

Point::Point(const float x, const float y) :
	x(x),
	y(y)
{}

Point::Point(Point &other) :
	x(other.x),
	y(other.y)
{}

Point::Point(Point const &other) :
	x(other.x),
	y(other.y)
{}


Point::~Point()
{}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

bool bsp(Point const a, Point const b, Point const c, Point const point);