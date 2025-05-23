/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:49:26 by athonda           #+#    #+#             */
/*   Updated: 2025/05/08 18:11:43 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed() :
	_value(0)
{}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		_value = other._value;
	}
	return (*this);
}

Fixed::~Fixed()
{}

Fixed::Fixed(int intValue)
{
	if (intValue > (INT_MAX >> _bits))
	{
		std::cerr << "Warning: Int input " << intValue << " caused positive saturation." << std::endl;
		this->_value = INT_MAX;
	}
	else if (intValue < (INT_MIN / (1 << _bits)))
	{
		std::cerr << "Warning: Int input " << intValue << " caused negative saturation." << std::endl;
		this->_value = INT_MIN;
	}
	else
	{
		this->_value = intValue * (1 << _bits);
	}
}

Fixed::Fixed(float floatValue)
{
	if (floatValue > static_cast<float>(INT_MAX >> _bits))
	{
		std::cerr << "Warning: Int input " << floatValue << " caused positive saturation." << std::endl;
		this->_value = INT_MAX;
	}
	else if (floatValue < static_cast<float>(INT_MIN / (1 << _bits)))
	{
		std::cerr << "Warning: Int input " << floatValue << " caused negative saturation." << std::endl;
		this->_value = INT_MIN;
	}
	else
	{
		this->_value = static_cast<int>(roundf(floatValue * (1 << _bits)));
	}
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_value / (1 << _bits));
}


bool	Fixed::operator>(const Fixed &rvalue) const
{
	if (this->_value > rvalue.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &rvalue) const
{
	if (this->_value < rvalue.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &rvalue) const
{
	if (this->_value >= rvalue.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &rvalue) const
{
	if (this->_value <= rvalue.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &rvalue) const
{
	if (this->_value == rvalue.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &rvalue) const
{
	if (this->_value != rvalue.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &rvalue) const
{
	Fixed result;
	result.setRawBits(this->_value + rvalue.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &rvalue) const
{
	Fixed result;
	result.setRawBits(this->_value - rvalue.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &rvalue) const
{
	long	a;
	long	b;
	long	c;
	Fixed 	result;

	a = this->_value;
	b = rvalue.getRawBits();
	c = (a * b) >> _bits;

	if (c > INT_MAX)
	{
		std::cerr << "Warning: Fixed point multiplication resulted in overflow. Saturating to INT_MAX." << std::endl;
		c = INT_MAX;
	}
	else if (c < INT_MIN)
	{
		std::cerr << "Warning: Fixed point multiplication resulted in underflow. Saturating to INT_MAX." << std::endl;
		c = INT_MIN;
	}
	result.setRawBits(static_cast<int>(c));
	return (result);
}

Fixed	Fixed::operator/(const Fixed &rvalue) const
{
	long long	a;
	long long	b;
	long long	c;
	Fixed	result;

	a = static_cast<long long>(this->_value) << this->_bits;
	std::cout << "a: " << a << std::endl;
	b = rvalue.getRawBits();
	std::cout << "b: " << b << std::endl;

	if (b == 0)
	{
		std::cerr << "Warning: devided by 0. return INT_MAX." << std::endl;
		return (Fixed(INT_MAX));
	}
	c = a / b;
	std::cout << "c: " << c << std::endl;
	if (c > INT_MAX)
	{
		std::cerr << "Warning: Fixed point multiplication resulted in overflow. Saturating to INT_MAX." << std::endl;
		c = INT_MAX;
	}
	else if (c < INT_MIN)
	{
		std::cerr << "Warning: Fixed point multiplication resulted in underflow. Saturating to INT_MAX." << std::endl;
		c = INT_MIN;
	}
	result.setRawBits(c);
	return (result);
}

Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	this->_value++;
	return (temp);
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	this->_value--;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}
std::ostream	&operator<<(std::ostream &outStream, const Fixed &fixedNum)
{
	outStream << fixedNum.toFloat();
	return (outStream);
}
