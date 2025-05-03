/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:49:58 by athonda           #+#    #+#             */
/*   Updated: 2025/05/03 22:58:37 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed		l(42.42f);
	Fixed 		m(41676.42f);
	Fixed		n(4148.6f);

	std::cout << "m: " << m << std::endl;
	std::cout << "n: " << n << std::endl;
	std::cout << "l: " << l << std::endl;

	std::cout << "m > n: " << (m > n) << std::endl;
	std::cout << "m < n: " << (m < n) << std::endl;
	std::cout << "m >= n: " << (m >= n) << std::endl;
	std::cout << "m <= n: " << (m <= n) << std::endl;
	std::cout << "m == n: " << (m == n) << std::endl;
	std::cout << "m == l: " << (m == l) << std::endl;
	std::cout << "m != n: " << (m != n) << std::endl;
	std::cout << "m != l: " << (m != l) << std::endl;

	std::cout << "m + n: " << (m + n) << std::endl;
	std::cout << "m - n: " << (m - n) << std::endl;
	std::cout << "m * n: " << std::fixed << (m * n) << std::endl;
	std::cout << "m / n: " << std::fixed << (m / n) << std::endl;

	Fixed e(0.1f);
	Fixed f(0);
	Fixed g(8388608);
	std::cout << "e / f: " << std::fixed << (e / f) << std::endl;
	std::cout << "l / f: " << std::fixed << (l / f) << std::endl;
	std::cout << "l / e: " << std::fixed << (l / e) << std::endl;
	std::cout << "g / e: " << std::fixed << (g / e) << std::endl;
	std::cout << "g / f: " << std::fixed << (g / f) << std::endl;


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