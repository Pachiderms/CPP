/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:05:58 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/24 10:44:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    *this = other;
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wrongAnimal){
    std::cout << "WrongAnimal Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &wrongAnimal)
        this->type = wrongAnimal.type;

    return *this;
}

std::string WrongAnimal::getType()const{
    return this->type;
}

void WrongAnimal::makeSound()const{
    std::cout << "WRONG ANIMAL SOUND!!" << std::endl;

    return ;
}
