/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:44:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/27 15:54:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <deque>

class RPN
{
    private:
        std::deque<char> _op;
    public:
        RPN(){}
        ~RPN(){}
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
    
    public:
        void calculate(const std::string &op);

         class BadInputException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};