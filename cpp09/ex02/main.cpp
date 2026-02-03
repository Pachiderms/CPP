/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.Cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:49:41 by tzizi            #+#    #+#             */
/*   Updated: 2025/10/29 16:49:41 by tzizi           ###   ########.fr       */
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
