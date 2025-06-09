/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:33:58 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/09 13:40:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_trap"){
    this->name = "DiamondTrap";
    this->hitPoints = FragTrap::hitPoints;
    this->maxHitPoints = FragTrap::maxhitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTraap::attackDamage;
    std::cout << "New default DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"){
    this->name = _name;
    this->hitPoints = FragTrap::hitPoints;
    this->maxHitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTraap::attackDamage;
    std::cout << "New DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(copy), FragTrap(copy){
    this->Name = other.Name;
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "Copy DiamondTrap" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &trap){
    std::cout << "Copy assignement DiamondTrap" << std::endl;
    this->Name = trap.Name;
    this->hitPoints = trap.hitPoints;
    this->attackDamage = trap.attackDamage;
    this->energyPoints = trap.energyPoints;
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap " << this->Name << " destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string &target){
    ScavTrap::attack(target);
    return ;
}

void DiamondTrap::guardGate(){
    ScavTrap::guardGate();
    return ;
}

void DiamondTrap::highFivesGuy(){
    FragTrap::highFivesGuy();
    return ;
}

void DiamondTrap::whoAmI(){
    if (this->hitPoints <= 0)
        return;
    std::cout << this->Name << " Clap name: " << this->name << std::endl;
}
