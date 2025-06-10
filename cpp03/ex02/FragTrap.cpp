/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:52 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/10 11:06:37 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "New default FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->Name = name;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "New FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other){
    this->Name = other.Name;
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "Copy FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &trap){
    std::cout << "Copy assignement FragTrap" << std::endl;
    this->Name = trap.Name;
    this->hitPoints = trap.hitPoints;
    this->maxHitPoints = trap.maxHitPoints;
    this->attackDamage = trap.attackDamage;
    this->energyPoints = trap.energyPoints;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->Name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuy(){
    if (this->hitPoints <= 0)
        return;
    std::cout << "Can I get a High Five?" << std::endl;
    return ;
}
