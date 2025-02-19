/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:02 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 16:34:35 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():name("dog"){
    this->type = "Dog";
    this->brain = new Brain();
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

Dog& Dog::operator=(const Dog &Dog){
    std::cout << "Dog Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &Dog)
        this->type = Dog.type;

    return *this;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog Destructor Called" << std::endl;
}