/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:54 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 14:08:30 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(std::string _type){
    std::cout << "AAnimal Parameter Constructor Called" << std::endl;
    type = _type;
}

AAnimal::AAnimal(const AAnimal &other){
    this->type = other.type;
}

AAnimal& AAnimal::operator=(const AAnimal &animal){
    if (this != &animal){
        this->type = animal.type;
    }

    return *this;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal Destructor Called" << std::endl;
}

std::string AAnimal::getType()const{
    return this->type;
}
