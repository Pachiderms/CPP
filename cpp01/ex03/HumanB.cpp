/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:14:24 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/10 23:14:24 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name){

}

void HumanB::setWeapon(Weapon _weapon){
    this->weapon = &_weapon;
}

void HumanB::attack(){
    if (!this->weapon)
    {
        std::cout << "No Weapon" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with their " <<
        this->weapon->getType() << std::endl;
    return ;
}
