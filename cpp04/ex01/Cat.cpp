/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/24 11:54:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other){
    *this = other;
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
