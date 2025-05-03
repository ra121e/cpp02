/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:49:26 by athonda           #+#    #+#             */
/*   Updated: 2025/05/03 12:24:41 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed() :
	_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_value = other._value;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = intValue * (1 << _bits);
}

Fixed::Fixed(float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = static_cast<int>(roundf(floatValue * (1 << _bits)));
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _bits));
//	return (static_cast<float>(_value / 256.0));
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
	int64_t	a;
	int64_t	b;
	int64_t	c;
	Fixed 	result;

	a = this->_value;
	std::cout << "a: " << a << std::endl;
	b = rvalue.getRawBits();
	std::cout << "b: " << b << std::endl;
	c = (a * b) >> _bits;
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
	result.setRawBits(static_cast<int>(c));
	return (result);
}

//Fixed	Fixed::operator/(const Fixed &rvalue) const
//{
//
//}

std::ostream	&operator<<(std::ostream &outStream, const Fixed &fixedNum)
{
	outStream << fixedNum.toFloat();
	return (outStream);
}
