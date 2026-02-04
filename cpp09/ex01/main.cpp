/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:39:58 by tzizi             #+#    #+#             */
/*   Updated: 2026/02/04 10:39:59 by tzizi            ###   ########.fr       */
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