/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 09:55:33 by athonda           #+#    #+#             */
/*   Updated: 2025/05/08 09:59:53 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    // テスト用の三角形を作成（座標：(0,0), (10,30), (20,0)）
    Point a(0.0f, 0.0f);
    Point b(10.0f, 30.0f);
    Point c(20.0f, 0.0f);

    // テスト用の点を作成
    Point inside(10.0f, 10.0f);           // 三角形の内部の点
    Point onVertex(0.0f, 0.0f);           // 頂点上の点 (a)
    Point onEdge(10.0f, 0.0f);            // 辺上の点 (a-c間)
    Point outside(30.0f, 15.0f);          // 三角形の外部の点

    // 結果を表示
    std::cout << "内部の点 (10, 10): " << (bsp(a, b, c, inside) ? "内部" : "内部ではない") << std::endl;
    std::cout << "頂点上の点 (0, 0): " << (bsp(a, b, c, onVertex) ? "内部" : "内部ではない") << std::endl;
    std::cout << "辺上の点 (10, 0): " << (bsp(a, b, c, onEdge) ? "内部" : "内部ではない") << std::endl;
    std::cout << "外部の点 (30, 15): " << (bsp(a, b, c, outside) ? "内部" : "内部ではない") << std::endl;

    // 別の三角形でもテスト
    Point d(0.0f, 0.0f);
    Point e(10.0f, 0.0f);
    Point f(5.0f, 10.0f);

    Point insideTest(5.0f, 5.0f);           // 三角形の内部の点
    Point outsideTest(15.0f, 5.0f);         // 三角形の外部の点
    Point onEdgeTest(5.0f, 0.0f);           // 辺上の点

    std::cout << "\n別の三角形でのテスト:" << std::endl;
    std::cout << "内部の点 (5, 5): " << (bsp(d, e, f, insideTest) ? "内部" : "内部ではない") << std::endl;
    std::cout << "外部の点 (15, 5): " << (bsp(d, e, f, outsideTest) ? "内部" : "内部ではない") << std::endl;
    std::cout << "辺上の点 (5, 0): " << (bsp(d, e, f, onEdgeTest) ? "内部" : "内部ではない") << std::endl;

    return 0;
}