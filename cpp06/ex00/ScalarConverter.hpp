/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:45:18 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/07 13:21:45 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cmath>
#include <limits>

class ScalarConverter
{
    private:
        ScalarConverter() {}
        virtual ~ScalarConverter() {}
    public:
        static void convert(const std::string& str);
    private:
        static void printImpossibleCharInt();

        static void printChar(char c);

        static void printInt(long l);

        static void printFloat(double d);

        static void printDouble(double v);
};
