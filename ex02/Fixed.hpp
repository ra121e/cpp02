/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:48:57 by athonda           #+#    #+#             */
/*   Updated: 2025/05/04 23:07:04 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <climits>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	Fixed(int intValue);
	Fixed(float floatValue);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(const Fixed &rvalue) const;
	bool	operator<(const Fixed &rvalue) const;
	bool	operator>=(const Fixed &rvalue) const;
	bool	operator<=(const Fixed &rvalue) const;
	bool	operator==(const Fixed &rvalue) const;
	bool	operator!=(const Fixed &rvalue) const;

	Fixed	operator+(const Fixed &rvalue) const;
	Fixed	operator-(const Fixed &rvalue) const;
	Fixed	operator*(const Fixed &rvalue) const;
	Fixed	operator/(const Fixed &rvalue) const;

	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

private:
	int					_value;
	static const int	_bits;
};

std::ostream	&operator<<(std::ostream &outStream, const Fixed &fixedNum);

#endif // FIXED_HPP
