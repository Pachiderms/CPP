/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/13 13:33:09 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap carlos("Carlos");
    ScavTrap bigCarlos("CarlosEvolution");

    carlos.attack("random");
    carlos.beRepaired(1);
    carlos.attack("random");
    carlos.attack("random");
    carlos.beRepaired(1);
    carlos.attack("random");
    carlos.attack("random");
    carlos.beRepaired(1);
    carlos.attack("random");
    carlos.attack("random");
    //10 actions
    carlos.beRepaired(1);
    carlos.attack("random");

    bigCarlos.attack("random");
    bigCarlos.beRepaired(1);
    bigCarlos.attack("random");
    bigCarlos.attack("random");
    bigCarlos.beRepaired(1);
    bigCarlos.attack("random");
    bigCarlos.attack("random");
    bigCarlos.beRepaired(1);
    bigCarlos.attack("random");
    bigCarlos.attack("random");
    //10 actions
    bigCarlos.beRepaired(1);
    bigCarlos.attack("random");

    return 0;
}