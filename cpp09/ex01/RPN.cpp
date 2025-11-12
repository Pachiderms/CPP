/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:50:17 by tzizi             #+#    #+#             */
/*   Updated: 2025/11/12 16:53:06 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const RPN& other) { (void)other; }

RPN& RPN::operator=(const RPN& other){ (void)other; return *this; }

void RPN::process(std::stack<char> &s)
{
    if (s.size() < 3)
        return;

    if (std::string("+-/*").find(s.top(), 0) == std::string::npos)
        return;

    char sign = s.top();
    s.pop();
    int b = s.top() - '0';
    s.pop();
    int  a = s.top() - '0';
    s.pop();

    switch (sign)
    {
        case '+':
            s.push((a + b) + '0');
            break;
        case '-':
            s.push((a - b) + '0');
            break;
        case '/':
            if (b == 0)
                throw BadInputException();
            s.push((a / b) + '0');
            break;
        case '*':
            s.push((a * b) + '0');
            break;
        default:
            break;
    }
}

void RPN::calculate(const std::string& op)
{
    std::stringstream ss(op);
    std::string token;
    std::stack<char> _s;
    while (ss >> token){
        if (token.size() == 2 && token[0] == '-' && isdigit(token[1])){
            _s.push(((token[1] - '0') * -1) + '0');
        }
        else if (token.size() != 1
            || ((std::string("+-/*").find(token[0], 0) != std::string::npos)
            && token.size() != 1) || isdigit(token[0] == 0)){
            throw BadInputException();
        }
        else{
            _s.push(token[0]);
        }
        RPN::process(_s);
    }
    if (_s.size() != 1)
        throw BadInputException();
    std::cout << _s.top() - '0' << std::endl;
}

const char* RPN::BadInputException::what() const throw()
{
    return "Error: bad input.";
}
