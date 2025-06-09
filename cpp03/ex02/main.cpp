/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/09 12:36:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap carlos("Clap");
    ScavTrap bigCarlos("Scav");
    FragTrap bigbigCarlos("Frag");

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

    std::cout << "FRAGTRAP" << std::endl;
    bigbigCarlos.attack("random");
    bigbigCarlos.beRepaired(1);
    bigbigCarlos.takeDamage(47);
    bigbigCarlos.attack("random");
    bigbigCarlos.beRepaired(12);
    bigbigCarlos.attack("random");
    bigbigCarlos.beRepaired(18);
    bigbigCarlos.highFivesGuy();
    bigbigCarlos.takeDamage(110);
    bigbigCarlos.highFivesGuy();
    bigbigCarlos.attack("random");
    //10 actions
    bigbigCarlos.beRepaired(1);
    bigbigCarlos.attack("random");

    return 0;
}