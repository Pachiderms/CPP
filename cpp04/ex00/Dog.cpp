/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:02 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 11:14:06 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog &other){
    *this = other;
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog){
    std::cout << "Dog Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &dog)
        this->type = dog.type;

    return *this;
}

void Dog::makeSound()const{
    std::cout << "WOOF!!" << std::endl;

    return ;
}