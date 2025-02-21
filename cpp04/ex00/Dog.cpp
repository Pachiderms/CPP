/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:02 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/21 09:53:29 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():name("dog"){
    this->type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(std::string _name):name(_name){
    this->type = "Dog";
    std::cout << "Dog String Constructor Called" << std::endl;
}

Dog::Dog(const Dog &other){
    this->type = other.getType();
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog){
    std::cout << "Dog Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &dog)
        this->type = dog.type;

    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Destructor Called" << std::endl;
}