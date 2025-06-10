/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/10 11:20:53 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    DiamondTrap diamond("Diamond");

    std::cout << "Attributes Check" << std::endl;

    std::cout << "Attack " << diamond.getAttack() << std::endl;
    std::cout << "Energy Points " << diamond.getEnergyAmount() << std::endl;
    std::cout << "Hit Points " << diamond.getHitPoints() << std::endl;
    
    std::cout << "Who AM I" << std::endl;
    diamond.whoAmI();
    diamond.attack("random");
    diamond.takeDamage(40);
    diamond.beRepaired(35);

    diamond.guardGate();
    diamond.highFivesGuy();

    diamond.takeDamage(100);

    diamond.highFivesGuy();
    diamond.whoAmI();
    diamond.attack("random");
    diamond.takeDamage(40);
    diamond.beRepaired(35);
    diamond.guardGate();

    return 0;
}