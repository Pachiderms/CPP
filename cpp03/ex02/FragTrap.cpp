/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:52 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/13 14:02:32 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : Name("TrapEvolution"), hitPoints(100),
    energyPoints(100), attackDamage(30){
    std::cout << "New default FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name):Name(name), hitPoints(100),
    energyPoints(100), attackDamage(30){
    std::cout << "New FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other):Name(other.Name), hitPoints(other.hitPoints),
    energyPoints(other.energyPoints), attackDamage(other.attackDamage){
        std::cout << "Copy FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &trap){
    std::cout << "Copy assignement FragTrap" << std::endl;
    this->Name = trap.Name;
    this->hitPoints = trap.hitPoints;
    this->attackDamage = trap.attackDamage;
    this->energyPoints = trap.energyPoints;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->Name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string &target){
    if (this->energyPoints <= 0)
    {
        std::cout << "Not enough energy!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
    return ;
}

void FragTrap::guardGate(){
    std::cout << "Gate keeper mode activated!" << std::endl;
    return ;
}

void FragTrap::highFivesGuy(){
    std::cout << "Can I get a High Five?!" << std::endl;
    return ;
}
