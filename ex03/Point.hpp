/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:39:54 by athonda           #+#    #+#             */
/*   Updated: 2025/05/07 09:43:53 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(float x, float y);
	Point(Fixed x, Fixed y);
	Point(Point &other);
	~Point();

	Fixed	getX(void);
	Fixed	getY(void);

	static Point	vec_sub(Point start, Point end);
	static Point	vec_normal(Point a);
	static Fixed	dot(Point a, Point b);
//	static Point	vec_cross(Point a, Point b);

private:
	Point	&operator=(const Point &other);
	const Fixed	x;
	const Fixed	y;
};