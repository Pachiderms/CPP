/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 11:49:28 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :A_Animal("Cat"){
    this->brain = new Brain();
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other){
    this->type = other.type;
    this->brain = new Brain();
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat &cat){
    std::cout << "Cat Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &cat){
        this->type = cat.type;
        this->brain = new Brain();
        this->brain = cat.brain;
    }

    return *this;
}

void Cat::makeSound()const{
    std::cout << "MEOW!!" << std::endl;

    return ;
}

void Cat::addIdea(std::string idea) const{
    
    const std::string& _idea = idea;
    this->brain->addIdea(idea);

    return ;   
}

std::string Cat::getIdea(int i) const{
    return this->brain->getIdea(i);
}
