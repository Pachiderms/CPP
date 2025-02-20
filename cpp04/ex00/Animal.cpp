/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:54 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 16:05:51 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Capibara"){
    this->SetPointers();
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &other):type(other.type){
    this->SetPointers();
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

void Animal::SetPointers(){
    this->sounds[1] = &Animal::bark;
    this->sounds[2] = &Animal::meow;
    this->sounds[0] = &Animal::chill;
}

std::string Animal::getType()const{
    return this->type;
}

void Animal::chill()const{
    std::cout << "I AM JUST A CHILL GUY." << std::endl;
}

void Animal::bark()const{
    std::cout << "WOOF!" << std::endl;
}

void Animal::meow()const{
    std::cout << "MEOW!" << std::endl;
}

void Animal::makeSound()const{
    std::string a_type[3] = {"Capibara", "Dog", "Cat"};

    for (int i = 0; i < 3; i++){
        if (a_type[i] == this->type){
            (this->*sounds[i])();
            break ;
        }
    }
    return ;
}
