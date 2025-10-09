/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:45:18 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/09 14:27:16 by tzizi            ###   ########.fr       */
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
