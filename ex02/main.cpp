/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:49:58 by athonda           #+#    #+#             */
/*   Updated: 2025/05/04 21:36:18 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
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

	std::cout << std::fixed;
	std::cout << "m * n: " << (m * n) << std::endl;
	std::cout << "m / n: " << (m / n) << std::endl;

	Fixed e(0.1f);
	Fixed f(0);
	Fixed g(8388608);
	std::cout << "e / f: " << (e / f) << std::endl;
	std::cout << "l / f: " << (l / f) << std::endl;
	std::cout << "l / e: " << (l / e) << std::endl;
	std::cout << "g / e: " << (g / e) << std::endl;
	std::cout << "g / f: " << (g / f) << std::endl;


//	Fixed const	b(Fixed(5.05f) * Fixed(2));
	std::cout.unsetf(std::ios_base::floatfield);
	Fixed		a(0);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	// Increment/Decrement tests
	Fixed z(5);
	std::cout << "z: " << z << std::endl;
	std::cout << "++++z: " << ++++z << std::endl;
	std::cout << "z: " << z << std::endl;
	std::cout << "z++: " << z++ << std::endl;
	std::cout << "z: " << z << std::endl;
	std::cout << "z++++: " << z++++ << std::endl;

	std::cout << "--z: " << --z << std::endl;
	std::cout << "z: " << z << std::endl;
	std::cout << "z--: " << z-- << std::endl;
	std::cout << "z: " << z << std::endl;
//	std::cout << b << std::endl;

//	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}