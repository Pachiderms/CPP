/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:40:11 by tzizi             #+#    #+#             */
/*   Updated: 2026/02/04 10:40:14 by tzizi            ###   ########.fr       */
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
        static void process(std::stack<int> &s);
};