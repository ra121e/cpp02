/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:54:57 by athonda           #+#    #+#             */
/*   Updated: 2025/05/07 09:49:25 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :
	x(0),
	y(0)
{
}

Point::Point(float x, float y) :
	x(x),
	y(y)
{

}

Point::Point(Fixed x, Fixed y) :
	x(x),
	y(y)
{}

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

Point	Point::vec_sub(Point start, Point end)
{
	Point	tmp(end.x - start.x, end.y - start.y);

	return (tmp);
}

Point	Point::vec_normal(Point a)
{
	Point	tmp(a.y * -1, a.x);

	return (tmp);
}

Fixed	Point::dot(Point a, Point b)
{
	return (a.x * b.x + a.y + b.y);
}

//Point	Point::vec_cross(Point a, Point b);
//{
//
//}