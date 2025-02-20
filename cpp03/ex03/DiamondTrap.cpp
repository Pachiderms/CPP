/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:33:58 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 14:15:34 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : Name("diamond"), hitPoints(100),
    energyPoints(100), attackDamage(30){
    std::cout << "New default DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name += "_clap_name"), Name(name), hitPoints(100),
energyPoints(100), attackDamage(30){
    std::cout << "New DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):Name(other.Name), hitPoints(other.hitPoints),
    energyPoints(other.energyPoints), attackDamage(other.attackDamage){
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
    if (this->energyPoints <= 0)
    {
        std::cout << "Not enough energy!" << std::endl;
        return ;
    }
    std::cout << "DiamondTrap " << this->Name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
    return ;
}

void DiamondTrap::guardGate(){
    std::cout << "Gate keeper mode activated!" << std::endl;
    return ;
}

void DiamondTrap::highFivesGuy(){
    std::cout << "Can I get a High Five?!" << std::endl;
    return ;
}

void DiamondTrap::whoAmI(){
    std::cout << this->Name << "Clap name: " << std::endl;
}
