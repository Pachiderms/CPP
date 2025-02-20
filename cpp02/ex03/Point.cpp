/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:26:29 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/20 13:20:05 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){

}

Point::Point(const float _x, const float _y) : x(_x), y(_y){

}

Point::~Point(){

}

Point::Point(const Point &point) : x(point.x), y(point.y){

}

Point& Point::operator=(const Point &other){
    if (this != &other){
        
    }
    return *this;
}

float Point::area(Point const a, Point const b, Point const c){
    float area = (a.x.toFloat() * (b.y.toFloat() - c.y.toFloat())
        + b.x.toFloat() * (c.y.toFloat() - a.y.toFloat())
        + c.x.toFloat() * (a.y.toFloat() - b.y.toFloat())) / 2;
    
    if (area < 0)
        area *= -1;
    return area;
}
    

bool Point::bsp( Point const a, Point const b, Point const c, Point const point){
    
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