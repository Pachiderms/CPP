/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:45:18 by tzizi             #+#    #+#             */
/*   Updated: 2025/11/24 15:11:04 by tzizi            ###   ########.fr       */
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

//static_cast is used for cases where you basically
// want to reverse an implicit conversion, with a few restrictions and additions.
// static_cast performs no runtime checks.
// This should be used if you know that you refer to an object of a specific type,
// and thus a check would be unnecessary.

class ScalarConverter
{
    private:
        ScalarConverter() {};
        ~ScalarConverter() {};
        ScalarConverter(const ScalarConverter & other);
        ScalarConverter& operator=(const ScalarConverter  & sc);
    public:
        static void convert(const std::string& str);
    private:
        static void printImpossibleCharInt();

        static void printChar(char c);

        static void printInt(long l);

        static void printFloat(double d);

        static void printDouble(double v);
};
