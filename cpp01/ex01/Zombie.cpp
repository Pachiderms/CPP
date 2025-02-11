/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:25:55 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/10 19:25:55 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("zombie"){
    std::cout << "Zombie: " << this->name << " spawned" << std::endl;
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
