/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:26:29 by pachiderms        #+#    #+#             */
/*   Updated: 2025/05/15 15:07:10 by tzizi            ###   ########.fr       */
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
