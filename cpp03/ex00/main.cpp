/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/09 13:07:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap carlos("Test");

    carlos.attack("random");
    carlos.beRepaired(1);
    carlos.attack("random");
    carlos.attack("random");
    carlos.attack("ok");
    carlos.attack("someone");
    carlos.beRepaired(1);
    carlos.takeDamage(3);
    carlos.beRepaired(1);
    carlos.beRepaired(2);
    carlos.takeDamage(8);
    carlos.attack("random");
    carlos.attack("LastAttack");
    carlos.beRepaired(1);
    std::cout << "AFTER 10 actions" << std::endl;
    
    carlos.attack("NOTenoughEnergyAttack");
    carlos.beRepaired(1);
    carlos.attack("NOTenoughEnergyAttack");
    carlos.beRepaired(1);
    carlos.attack("NOTenoughEnergyAttack");
    carlos.beRepaired(1);

    return 0;
}