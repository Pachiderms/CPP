/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:36:14 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/11 12:36:14 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;

    if (argc < 2)
    {
        std::cout << "You seem to be in a good mood" << std::endl;
        return 0;
    }
    for (int i=1; i < argc; i++)
    {
        harl.complain(argv[i]);
        std::cout << std::endl;
    }
    return 0;
}