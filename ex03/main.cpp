/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 09:55:33 by athonda           #+#    #+#             */
/*   Updated: 2025/05/05 10:17:12 by athonda          ###   ########.fr       */
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
	// min/max tests
	Fixed h(92345789.23f);
	Fixed i(4.56f);
	const Fixed j(7.89f);
	Fixed const k(0.12f);

	std::cout << "min(h, i): " << Fixed::min(h, i) << std::endl; // 非const版
	std::cout << "max(h, i): " << Fixed::max(h, i) << std::endl; // 非const版
	std::cout << "min(j, k): " << Fixed::min(j, k) << std::endl; // const版
	std::cout << "max(j, k): " << Fixed::max(j, k) << std::endl; // const版
	std::cout << "min(h, j): " << Fixed::min(h, j) << std::endl; // const版 (引数にconstが含まれるため)
//	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}
