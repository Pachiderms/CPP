/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:52 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/04 14:52:27 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : Name("TrapEvolution"), hitPoints(100),
    energyPoints(50), attackDamage(20){
    std::cout << "New default ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name):Name(name), hitPoints(100),
    energyPoints(50), attackDamage(20){
    std::cout << "New ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other):Name(other.Name), hitPoints(other.hitPoints),
    energyPoints(other.energyPoints), attackDamage(other.attackDamage){
        std::cout << "Copy ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &trap){
    std::cout << "Copy assignement ScavTrap" << std::endl;
    this->Name = trap.Name;
    this->hitPoints = trap.hitPoints;
    this->attackDamage = trap.attackDamage;
    this->energyPoints = trap.energyPoints;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->Name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
    return ;
}

void ScavTrap::guardGate(){
    if (this->hitPoints <= 0)
        return;
    std::cout << "Gate keeper mode activated!" << std::endl;
    return ;
}
