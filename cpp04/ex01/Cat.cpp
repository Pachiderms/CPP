/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 16:28:05 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():name("cat"){
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(std::string _name):name(_name){
    this->type = "Cat";
    std::cout << "Cat String Constructor Called" << std::endl;
}

Cat::Cat(const Cat &other){
    this->type = other.getType();
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat &Cat){
    std::cout << "Cat Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &Cat)
        this->type = Cat.type;

    return *this;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat Destructor Called" << std::endl;
}