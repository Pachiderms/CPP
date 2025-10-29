/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.Cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:49:41 by marvin            #+#    #+#             */
/*   Updated: 2025/10/29 16:49:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try {
        PmergeMe::process(ac, av);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
