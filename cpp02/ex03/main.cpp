/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:39:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/05/20 17:44:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"

int main()
{
    Point a(-4, 4);
    Point b(3, 4);
    Point c(0, -1);

    Point f(-2.8, 2.5);
    Point e(1.78, 4);
    Point g(2, 2.3);
    Point h(1.4, -3.76);
    Point i(1.86, 3.88);

    std::cout << "E : " << bsp(a, b , c, e) << std::endl;
    std::cout << "F : " << bsp(a, b , c, f) << std::endl;
    std::cout << "G : " << bsp(a, b , c, g) << std::endl;
    std::cout << "H : " << bsp(a, b , c, h) << std::endl;
    std::cout << "I : " << bsp(a, b , c, i) << std::endl;

    std::cout << "A : " << bsp(a, b , c, a) << std::endl;
    std::cout << "B : " << bsp(a, b , c, b) << std::endl;
    std::cout << "C : " << bsp(a, b , c, c) << std::endl;

    return 0;
}