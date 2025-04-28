/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 00:08:21 by athonda           #+#    #+#             */
/*   Updated: 2025/04/28 16:35:22 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed() :
	_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "The address of new instance:" << this << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	std::cout << "The address of before copy:" << this << std::endl;
	*this = other;
	std::cout << "The address of after copy:" << this << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	std::cout << "The address of before operator=:" << this << std::endl;
	if (this != &other)
	{
		_value = other._value;
	}
	std::cout << "The address of after operator=:" << this << std::endl;
	return (*this);

}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	std::cout << "The address of destructor:" << this << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	std::cout << "The address in get function :" << this << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "The address in set function :" << this << std::endl;
	this->_value = raw;
}