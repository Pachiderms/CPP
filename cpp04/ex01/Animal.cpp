/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:54 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/26 14:31:27 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &other){
    this->type = other.type;
    std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal::Animal(std::string _type){
    std::cout << "Animal Default Constructor Called" << std::endl;
    type = _type;
}

Animal& Animal::operator=(const Animal &animal){
    std::cout << "Animal Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &animal)
        this->type = animal.type;

    return *this;
}

Animal::~Animal(){
    std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType()const{
    return this->type;
}

void Animal::makeSound()const{
    std::cout << "ANIMAL SOUND." << std::endl;
    return ;
}
