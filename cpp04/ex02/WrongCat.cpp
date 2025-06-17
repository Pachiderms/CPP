/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 14:19:18 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    this->brain = new Brain();
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat(){
    delete this->brain;
    std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
    this->type = other.type;
    this->brain = new Brain();
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &cat){
    std::cout << "WrongCat Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &cat){
        this->type = cat.type;
        this->brain = new Brain();
        this->brain = cat.brain;
    }

    return *this;
}

void WrongCat::makeSound()const{
    std::cout << "WRONG MEOW!!" << std::endl;

    return ;
}

void WrongCat::addIdea(std::string idea) const{
    
    const std::string& _idea = idea;
    this->brain->addIdea(idea);

    return ;   
}

std::string WrongCat::think(int i) const{
    return this->brain->think(i);
}
