/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:06:59 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/24 10:57:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
    *this = other;
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongCat){
    std::cout << "WrongCat Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &wrongCat)
        this->type = wrongCat.type;

    return *this;
}

void WrongCat::makeSound()const{
    std::cout << "WRONG MEOW!!" << std::endl;

    return ;
}
