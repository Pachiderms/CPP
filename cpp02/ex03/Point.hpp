/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:23:10 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/20 12:37:51 by tzizi            ###   ########.fr       */
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

        static float area(Point const a, Point const b, Point const c);
        static bool bsp( Point const a, Point const b, Point const c, Point const point);
};

#endif