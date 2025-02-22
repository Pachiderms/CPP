/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:05:58 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/22 20:17:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongCapibara"){
    this->SetPointers();
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
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

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void WrongAnimal::SetPointers(){
    this->sounds[1] = &WrongAnimal::bark;
    this->sounds[2] = &WrongAnimal::meow;
    this->sounds[0] = &WrongAnimal::chill;
}

std::string WrongAnimal::getType()const{
    return this->type;
}

void WrongAnimal::chill()const{
    std::cout << "I DON'T KNOW IF I AM A CHILL GUY." << std::endl;
}

void WrongAnimal::bark()const{
    std::cout << "MEOW I MEAN WOOF!" << std::endl;
}

void WrongAnimal::meow()const{
    std::cout << "WOOF I MEAN MEOW!" << std::endl;
}

void WrongAnimal::makeSound()const{
    std::string a_type[3] = {"WrongCapibara", "WrongDog", "WrongCat"};

    for (int i = 0; i < 3; i++){
        if (a_type[i] == this->type){
            (this->*sounds[i])();
            break ;
        }
    }
    return ;
}
