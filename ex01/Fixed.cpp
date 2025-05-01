/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:40:29 by athonda           #+#    #+#             */
/*   Updated: 2025/05/01 19:43:08 by athonda          ###   ########.fr       */
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

std::ostream	&operator<<(std::ostream &outStream, const Fixed &fixedNum)
{
	outStream << fixedNum.toFloat();
	return (outStream);
}