/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:50:17 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/27 17:41:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const RPN& other):_op(other._op){}

RPN& RPN::operator=(const RPN& other)
{
    if (this != &other)
        _op = other._op;
    return *this;
}

bool isSign(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void RPN::calculate(const std::string& op)
{
    std::string signs = "+-/*";
    try{
        for (size_t i=0; i < op.length(); i++){
            if (op[i] != ' '){
                std::string from = op.substr(i);
                size_t space_index = from.find(" ");
                std::string tmp = op.substr(i, space_index);
                if (tmp.length() == 2 && tmp[0] == '-' && isdigit(tmp[1])){
                    _op.push_back(((tmp[1] - '0') * -1) + '0');
                    i += space_index;
                }
                else if ((tmp.length() > 1 || (signs.find(tmp[0], 0) == (size_t)-1 && isdigit(tmp[0]) <= 0))){
                    if (!_op.empty())
                        _op.clear();
                    throw BadInputException();
                }
                else
                    _op.push_back(tmp[0]);
            }
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
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}

const char* RPN::BadInputException::what() const throw()
{
    return "Error: bad input.";
}
