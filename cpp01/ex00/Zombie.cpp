/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:25:55 by marvin            #+#    #+#             */
/*   Updated: 2025/02/10 19:25:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("zombie"){

}

Zombie::Zombie(std::string _name) : name(_name){
    Brainz();
}

Zombie::~Zombie(){
    std::cout << "Zombie: " << this->name << " died." << std::endl;
}

void Zombie::SetName(std::string _name){
    this->name = _name;
}

void Zombie::Brainz(){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
