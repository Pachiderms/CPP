/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/26 14:18:15 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other){
    this->type = other.type;
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat &cat){
    std::cout << "Cat Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &cat)
        this->type = cat.type;

    return *this;
}

void Cat::makeSound()const{
    std::cout << "MEOW!!" << std::endl;

    return ;
}