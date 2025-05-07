/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:39:54 by athonda           #+#    #+#             */
/*   Updated: 2025/05/07 10:16:17 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const float x, const float y);
	Point(Point &other);
	~Point();

	Fixed	getX(void) const;
	Fixed	getY(void) const;

private:
	Point	&operator=(const Point &other);
	const Fixed	x;
	const Fixed	y;
};