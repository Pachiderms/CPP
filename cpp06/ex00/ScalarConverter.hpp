/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:45:18 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/17 14:16:31 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class ScalarConverter
{
    public:
        ScalarConverter() {};
        virtual ~ScalarConverter() {};
        ScalarConverter(const ScalarConverter & other);
        ScalarConverter & operator=(const ScalarConverter sc);

        static void convert(const std::string str);
};