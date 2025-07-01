/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:45:21 by tzizi             #+#    #+#             */
/*   Updated: 2025/07/01 15:17:33 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    
}

ScalarConverter::~ScalarConverter(){

}

ScalarConverter::ScalarConverter(const ScalarConverter & other){
    *this = other;
}


ScalarConverter & ScalarConverter::operator=(const ScalarConverter sc){
    (void)sc;
    return *this;
}

int ft_atoi(const std::string str){
    int i = 0;
    int sign = str[0] == '-' ? -1: 1;

    for (int j = sign == -1 ? 1 : 0; str[j] && str[j] != '.'; j++)
    {
        if (str[j] < '0' || str[j] > '9')
            return 0;
        i = i * 10 + (str[j] - '0');
    }
    return i *= sign;
}

float ft_atof(const std::string str){
    float f = 0;
    float point = 1.0f;
    int sign = str[0] == '-' ? -1: 1;

    // if (str[str.length()] != 'f')
    //     return 0.0;
    for (int j = sign == -1 ? 1 : 0; str[j] && str[j] != 'f'; j++)
    {
        if (str[j] == '.')
            point = 10.0f;
        else if (str[j] >= '0' || str[j] <= '9')
        {
            if (point < 10){
                f = f * 10 + (str[j] - '0');
            }
            else{
                f += ((str[j] - '0') / point);
                point *= 10.0f;
            }
        }
    }
    return f *= sign;
}

void ScalarConverter::convert(const std::string str){
    char c;
    int i;
    float f;
    double d;

    (void)c;
    (void)f;
    (void)d;

    i = ft_atoi(str);
    f = ft_atof(str);

    std::cout << "int: " << i << std::endl;
    std::cout << "float " << f << "f" << std::endl;
}