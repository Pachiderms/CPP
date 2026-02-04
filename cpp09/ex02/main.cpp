/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:40:28 by tzizi             #+#    #+#             */
/*   Updated: 2026/02/04 10:40:28 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2){
        std::cerr << "Not Enough Args" << std::endl;
        return 1;
    }
    try {
        PmergeMe p(av);
        p.process();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
