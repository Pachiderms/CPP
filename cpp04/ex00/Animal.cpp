/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:54 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/24 10:44:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &other){
    *this = other;
    std::cout << "Animal Copy Constructor Called" << std::endl;
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
