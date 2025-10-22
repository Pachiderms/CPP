/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:44:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/22 18:11:11 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char**av)
{
    if (ac != 2)
        return -1;

    RPN rpn;

    // std::deque<char> _op;
    // _op.push_back('3');
    // _op.push_back('4');
    // _op.push_back('-');
    // _op.push_back('5');
    // _op.push_back('+');

    // for (size_t i=0;i<_op.size();i++){
    //             std::cout << " " << _op[i] << std::endl;
    // }

    // int a = _op.front() - 48;
    // std::cout << a << std::endl;
    // _op.pop_front();
    // std::cout << "pop_front()\n";

    // for (size_t i=0;i<_op.size();i++){
    //             std::cout << " " << _op[i] << std::endl;
    // }


    // int b = _op.front() - 48;
    // std::cout << b << std::endl;
    // _op.pop_front();

    // _op.pop_front();
    
    // _op.push_front((a - b) + 48);
    // std::cout << "push_front('/')\n";

    // for (size_t i=0;i<_op.size();i++){
    //             std::cout << " " << _op[i] << std::endl;
    // }
    // (void)av;
    rpn.calculate(av[1]);
    
    return 0;
}