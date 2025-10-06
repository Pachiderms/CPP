/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:45:18 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/06 17:23:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// convert.cpp
// g++ -Wall -Wextra -Werror -std=c++98 convert.cpp -o convert

#include <iostream>
#include <string>
#include <cstdlib>
#include <cerrno>
#include <climits>
#include <cfloat>
#include <cmath>
#include <limits>

class ScalarConverter {
private:
    ScalarConverter() {} // Not instantiable
    ~ScalarConverter() {}
public:
    static void convert(const std::string& str);
private:
    static void printImpossibleCharInt();

    static void printChar(char c);

    static void printInt(long l);

    static void printFloat(double d);

    static void printDouble(double v);
};
