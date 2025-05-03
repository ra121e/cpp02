/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:40:29 by athonda           #+#    #+#             */
/*   Updated: 2025/05/03 21:20:20 by athonda          ###   ########.fr       */
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
	std::cout << "Float constructor called" << std::endl;
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

std::ostream	&operator<<(std::ostream &outStream, const Fixed &fixedNum)
{
	outStream << fixedNum.toFloat();
	return (outStream);
}