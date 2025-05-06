/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:54:57 by athonda           #+#    #+#             */
/*   Updated: 2025/05/06 22:48:15 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :
	x(0),
	y(0)
{
}

Point::Point(Point &other) :
	x(other.x),
	y(other.y)
{
}

Point::~Point()
{
}

Fixed	Point::getX(void)
{
	return (this->x);
}

Fixed	Point::getY(void)
{
	return (this->y);
}