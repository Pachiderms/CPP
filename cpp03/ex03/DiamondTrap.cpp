/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:33:58 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/09 17:21:11 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_trap"){
    this->Name = "DiamondTrap";
    this->name = "DiamondTrap_clap_name";
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->attackDamage = 30;
    this->energyPoints = 50;
    std::cout << "New default DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"){
    this->Name = _name;
    this->name = _name + "_clap_name";
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->attackDamage = 30;
    this->energyPoints = 50;
    std::cout << "New DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other){
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

int DiamondTrap::getAttack()
{
    return this->attackDamage;
}

int DiamondTrap::getHitPoints()
{
    return this->hitPoints;
}

int DiamondTrap::getEnergyAmount()
{
    return this->energyPoints;
}
