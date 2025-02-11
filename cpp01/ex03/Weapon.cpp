/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:14:32 by marvin            #+#    #+#             */
/*   Updated: 2025/02/10 23:14:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("gun"){

}

Weapon::Weapon(std::string _type) : type(_type){

}

const std::string Weapon::getType(){
    return this->type;
}

void Weapon::setType(std::string _type){
    this->type = _type;
}
