/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:44:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/22 17:25:00 by tzizi            ###   ########.fr       */
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

        class MyException : std::runtime_error{
            public:
                MyException(const std::string& err) : std::runtime_error(err){}
        };
};