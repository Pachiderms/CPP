/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:52 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/13 13:10:06 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Trap"), hitPoints(10),
    energyPoints(10), attackDamage(0){
    std::cout << "New default ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name):Name(name), hitPoints(10),
    energyPoints(10), attackDamage(0){
    std::cout << "New ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):Name(other.Name), hitPoints(other.hitPoints),
    energyPoints(other.energyPoints), attackDamage(other.attackDamage){
        std::cout << "Copy ClapTrap" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &trap){
    std::cout << "Copy assignement ClapTrap" << std::endl;
    this->Name = trap.Name;
    this->hitPoints = trap.hitPoints;
    this->attackDamage = trap.attackDamage;
    this->energyPoints = trap.energyPoints;
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "Clap Trap destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target){
    if (this->energyPoints <= 0)
    {
        std::cout << "Not enough energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
    return ;
}
void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
    return ;
}
void ClapTrap::beRepaired(unsigned int amount){
    if (this->energyPoints <= 0)
    {
        std::cout << "Not enough energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " recovered " << amount << " hit points." << std::endl;
    this->energyPoints--;
    return ;
}