/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:49:58 by athonda           #+#    #+#             */
/*   Updated: 2025/05/01 22:49:14 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed		l(42.42f);
	Fixed 		m(42.42f);
	Fixed		n(45.6f);

	std::cout << "m > n: " << (m > n) << std::endl;
	std::cout << "m < n: " << (m < n) << std::endl;
	std::cout << "m >= n: " << (m >= n) << std::endl;
	std::cout << "m <= n: " << (m <= n) << std::endl;
	std::cout << "m == n: " << (m == n) << std::endl;
	std::cout << "m == l: " << (m == l) << std::endl;
	std::cout << "m != n: " << (m != n) << std::endl;
	std::cout << "m != l: " << (m != l) << std::endl;

//	Fixed const	b(Fixed(5.05f) * Fixed(2));

//	std::cout << a << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;

//	std::cout << b << std::endl;

//	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}