/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:23:10 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/19 16:40:11 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float _x, const float _y);
        ~Point();
        Point(const Point &point);
        Point& operator=(const Point &other);

        int InRect(Point const a, Point const b, Point const point)const;
        bool bsp( Point const a, Point const b, Point const c, Point const point);
};

#endif