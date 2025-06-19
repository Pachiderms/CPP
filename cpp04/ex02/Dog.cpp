/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:02 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 11:49:19 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : A_Animal("Dog"){
    this->brain = new Brain();
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog &other){
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog){
    std::cout << "Dog Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &dog){
        this->type = dog.type;
        this->brain = new Brain(*dog.brain);
        this->brain = dog.brain;
    }

    return *this;
}

void Dog::makeSound()const{
    std::cout << "WOOF!!" << std::endl;

    return ;
}

void Dog::addIdea(std::string idea) const{
    
    const std::string& _idea = idea;
    this->brain->addIdea(idea);

    return ;   
}

std::string Dog::getIdea(int i) const{
    return this->brain->getIdea(i);
}
