/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:50:17 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/22 18:11:59 by tzizi            ###   ########.fr       */
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

void RPN::calculate(const std::string& op)
{
    std::string signs = "+-/*";
    try{
        for (size_t i=0; i < op.length(); i++){
            // std::cout << signs.find(op[i], 0) << std::endl;
            if (signs.find(op[i], 0) == (size_t)-1 && isdigit(op[i]) <= 0){
                if (!_op.empty())
                    _op.clear();
                throw MyException("bad input: ");
            }
            _op.push_back(op[i]);
            // std::cout << " " << _op.front() << std::endl;
        }
    }catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    
    try{
        // std::cout << "Calculation.\n";
        while (_op.size() >= 3)
        {
            int a, b;
            a = _op.front() - '0';
            _op.pop_front();
            b = _op.front() - '0';
            _op.pop_front();
            // std::cout << "a: "<< a  << " b: " << b << " sign: "
            //     << _op.front() << std::endl;
            switch (_op.front())
            {
                case '+':
                    _op.pop_front();
                    _op.push_front((a + b) + '0');
                    break;
                case '-':
                    _op.pop_front();
                    _op.push_front((a - b) + '0');
                    break;
                case '/':
                    _op.pop_front();
                    _op.push_front((a / b) + '0');
                    break;
                case '*':
                    _op.pop_front();
                    _op.push_front((a * b) + '0');
                    break;
                default:
                    break;
            }
            // for (size_t i=0;i<_op.size();i++){
            //     std::cout << " " << _op[i] << std::endl;
            // }
        }
        std::cout << "Result: " << _op.front() - '0' << std::endl;
    }catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}