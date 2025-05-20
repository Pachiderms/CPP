/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:04:16 by tzizi             #+#    #+#             */
/*   Updated: 2025/05/20 17:41:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
    
    float total_a = Point::area(a, b, c);
    float a1 = Point::area(point, a, b);
    float a2 = Point::area(point, b, c);
    float a3 = Point::area(point, a, c);

    // std::cout << a1 << " " << a2 << " " << a3 << std::endl;
    // std::cout << a1 + a2 + a3 << std::endl;
    // std::cout << total_a << std::endl;
 
    if (a1 == 0 || a2 == 0 || a3 == 0)
        return false;
    return (a1 + a2 + a3 == total_a);
}
