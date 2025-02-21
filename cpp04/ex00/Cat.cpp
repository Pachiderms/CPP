/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/21 09:53:44 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():name("cat"){
    this->type = "Cat";
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

Cat& Cat::operator=(const Cat &cat){
    std::cout << "Cat Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &cat)
        this->type = cat.type;

    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
}