/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:26:29 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/19 16:44:49 by pachiderms       ###   ########.fr       */
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

int Point::InRect(Point const a, Point const b, Point const point)const{
    Fixed max_x = Fixed::max(a.x, b.x);
    Fixed max_y = Fixed::max(a.y, b.y);
    Fixed min_x = Fixed::max(a.x, b.x);
    Fixed min_y = Fixed::max(a.y, b.y);

    if (max_x < point.x)
        return 1;
    else if (max_y < point.y)
        return 2;
    else if (min_x > point.x) 
        return -1;
    else if (min_y > point.y)
        return -2;
    return 0;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){


    return false;
}