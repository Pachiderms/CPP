/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:50:17 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/29 12:19:06 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const RPN& other) { (void)other; }

RPN& RPN::operator=(const RPN& other){ (void)other; return *this; }

void RPN::process(std::stack<int> &s)
{
    if (s.size() < 3)
        return;

    char sign = s.top() + '0';
    if (sign != '-' && sign != '+' && sign != '/' && sign != '*')
        return;
    s.pop();
    int b = s.top();
    s.pop();
    int  a = s.top();
    s.pop();

    //std::cout << "\nsign=" << sign << ", a=" << a << ", b=" << b << std::endl;
    switch (sign)
    {
        case '+':
            s.push((a + b));
            break;
        case '-':
            s.push((a - b));
            break;
        case '/':
            if (b == 0)
                throw std::runtime_error("Bad Input");
            s.push((a / b));
            break;
        case '*':
            s.push((a * b));
            break;
        default:
            break;
    }
    //std::cout << "top: " << s.top() << std::endl;

}

void RPN::calculate(const std::string& op)
{
    std::stringstream ss(op);
    std::string token;
    std::cout << "\n";
    std::stack<int> _s;
    while (ss >> token){
        if (token.size() == 2 && token[0] == '-' && isdigit(token[1])){
            _s.push(((token[1] - '0') * -1));
        }
        else if (token.size() != 1
            || ((std::string("+-/*").find(token[0], 0) != std::string::npos)
            && token.size() != 1) || isdigit(token[0] == 0)){
            throw std::runtime_error("Bad Input");
        }
        else{
            _s.push(token[0] - '0');
        }
        //std::cout << _s.top() << "/";
        RPN::process(_s);
    }
    if (_s.size() != 1)
        throw std::runtime_error("Bad Input");
    std::cout << _s.top() << std::endl;
}

