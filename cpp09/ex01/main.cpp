/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:44:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/29 17:09:14 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char**av)
{
    if (ac != 2)
        return 1;

    try{
        RPN::calculate(av[1]);
    }
    catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}