/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:50:17 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/29 17:32:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const RPN& other) { (void)other; }

RPN& RPN::operator=(const RPN& other){ (void)other; return *this; }

bool isSign(char c){ return c == '+' || c == '-' || c == '*' || c == '/'; }

void RPN::calculate(const std::string& op)
{
    std::stringstream ss(op);
    std::string token;
    // while (ss >> tmp)
    //     std::cout << tmp << std::endl;
    // return;
    std::stack<char> _op;
    while (ss >> token){
        if (token.size() == 2 && token[0] == '-' && isdigit(token[1]))
            _op.push(((tmp[1] - '0') * -1) + '0');
        else if ((token.size() == 1 || (std::string("+-/*").find(tmp[0], 0) != std::string::npos && isdigit(tmp[0]) <= 0))){
            throw BadInputException();
        }
        else
            _op.push(tmp[0]);
    }
        // for (size_t i=0; i < _op.size();i++)
        //     std::cout << " " << _op[i] << "-> int: " << _op[i] - '0';
        // std::cout << "\n";
    std::deque<char> res;
    while (!_op.empty())
    {
        int a, b;
        char sign;
        while (!isSign(_op.front()) && !_op.empty())
        {
            res.push_back(_op.front());
            _op.pop_front();
        }
        res.push_back(_op.front());
        _op.pop_front();
            // for (size_t i=0; i < res.size();i++)
            //     std::cout << " " << res[i] << "-> int: " << res[i] - '0';
            // std::cout << "res\n";
        sign = res.back();
        res.pop_back();
        b = res.back() - '0';
        res.pop_back();
        a = res.back() - '0';
        res.pop_back();
            // std::cout << "a: "<< a  << " b: " << b << " sign: "
            //      << sign << std::endl;
        if (isdigit((char)a) < 0 || isdigit((char)b) < 0)
            throw BadInputException();
        switch (sign)
        {
            case '+':
                res.push_back((a + b) + '0');
                break;
            case '-':
                res.push_back((a - b) + '0');
                break;
            case '/':
                if (b == 0)
                    throw BadInputException();
                res.push_back((a / b) + '0');
                break;
            case '*':
                res.push_back((a * b) + '0');
                break;
            default:
                break;
        }
    }
        // for (size_t i=0; i < res.size();i++)
        //     std::cout << " " << res[i] << "-> int: " << res[i] - '0';
    if (res.size() > 1)
        throw BadInputException();
    std::cout << "Result: " << res.front() - '0' << std::endl;
}

const char* RPN::BadInputException::what() const throw()
{
    return "Error: bad input.";
}
