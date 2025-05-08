/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 09:55:33 by athonda           #+#    #+#             */
/*   Updated: 2025/05/08 11:36:08 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
Point a(0.0f, 0.0f);
Point b(10.0f, 30.0f);
Point c(20.0f, 0.0f);

Point inside(10.0f, 10.0f);           // 三角形の内部の点
Point onVertex(0.0f, 0.0f);           // 頂点上の点 (a)
Point onEdge(10.0f, 0.0f);            // 辺上の点 (a-c間)
Point outside(30.0f, 15.0f);          // 三角形の外部の点

// displaly result
std::cout << "inside (10, 10): " << (bsp(a, b, c, inside) ? "inside" : "outside") << std::endl;
std::cout << "vertex (0, 0): " << (bsp(a, b, c, onVertex) ? "inside" : "outside") << std::endl;
std::cout << "on the line (10, 0): " << (bsp(a, b, c, onEdge) ? "inside" : "outside") << std::endl;
std::cout << "outside (30, 15): " << (bsp(a, b, c, outside) ? "inside" : "outside") << std::endl;

// other triangle
Point d(0.0f, 0.0f);
Point e(10.0f, 0.0f);
Point f(5.0f, 10.0f);

Point insideTest(5.0f, 5.0f);           // 三角形の内部の点
Point outsideTest(15.0f, 5.0f);         // 三角形の外部の点
Point onEdgeTest(5.0f, 0.0f);           // 辺上の点

std::cout << "\n別の三角形でのテスト:" << std::endl;
std::cout << "inside point (5, 5): " << (bsp(d, e, f, insideTest) ? "inside" : "outside") << std::endl;
std::cout << "outside point (15, 5): " << (bsp(d, e, f, outsideTest) ? "inside" : "outside") << std::endl;
std::cout << "on line (5, 0): " << (bsp(d, e, f, onEdgeTest) ? "inside" : "outside") << std::endl;

return (0);
}