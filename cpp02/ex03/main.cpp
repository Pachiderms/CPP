/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:39:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 13:19:36 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(-4, 4);
    Point b(3, 4);
    Point c(0, -1);

    Point f(-2.8, 2.5);
    Point e(1.789, 4);
    Point g(2, 2.3);
    Point h(1.4, -3.76);
    Point i(1.86, 3.8842);

    std::cout << Point::bsp(a, b , c, e) << std::endl;
    std::cout << Point::bsp(a, b , c, f) << std::endl;
    std::cout << Point::bsp(a, b , c, g) << std::endl;
    std::cout << Point::bsp(a, b , c, h) << std::endl;
    std::cout << Point::bsp(a, b , c, i) << std::endl;

    return 0;
}