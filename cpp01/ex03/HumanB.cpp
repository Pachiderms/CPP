/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:14:24 by marvin            #+#    #+#             */
/*   Updated: 2025/02/10 23:14:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name){

}

void HumanB::setWeapon(Weapon _weapon){
    this->weapon = &_weapon;
}

void HumanB::attack(){
    std::cout << this->name << "attacks with their " <<
        this->weapon->getType() << std::endl;
    return ;
}
