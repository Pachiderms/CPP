/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:44:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/29 17:32:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <algorithm>
#include <deque>
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

        class BadInputException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};