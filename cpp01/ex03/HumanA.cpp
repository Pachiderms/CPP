/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:14:16 by marvin            #+#    #+#             */
/*   Updated: 2025/02/10 23:14:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon _weapon) : name(_name),
    weapon(_weapon){

}

void HumanA::attack(){
    std::cout << this->name << " attacks with their " <<
        this->weapon.getType() << std::endl;
    return ;
}
