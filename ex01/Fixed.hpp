/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:39:55 by athonda           #+#    #+#             */
/*   Updated: 2025/05/03 21:10:47 by athonda          ###   ########.fr       */
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

private:
	int					_value;
	static const int	_bits;
};

std::ostream	&operator<<(std::ostream &outStream, const Fixed &fixedNum);

#endif // FIXED_HPP