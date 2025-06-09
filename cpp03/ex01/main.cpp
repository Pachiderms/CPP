/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/09 12:34:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap carlos("Clap");
    ScavTrap bigCarlos("Scav");

    std::cout << "CLAPTRAP" << std::endl;
    carlos.attack("random");
    carlos.beRepaired(1);
    carlos.takeDamage(10);
    carlos.attack("random");
    carlos.beRepaired(1);

    std::cout << "SCAVTRAP" << std::endl;
    bigCarlos.attack("random");
    bigCarlos.beRepaired(1);
    bigCarlos.takeDamage(1);
    bigCarlos.attack("random");
    bigCarlos.beRepaired(1);
    bigCarlos.attack("random");
    bigCarlos.guardGate();
    bigCarlos.takeDamage(99);
    //10 actions
    bigCarlos.beRepaired(1);
    bigCarlos.attack("random");

    return 0;
}