/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:44:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/11/12 16:51:29 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <algorithm>
#include <stack>

class RPN
{
    public:
        RPN(){}
        ~RPN(){}
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
    
    public:
        static void calculate(const std::string &op);
        static void process(std::stack<char> &s);

        class BadInputException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};