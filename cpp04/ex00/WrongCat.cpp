/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:06:59 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 16:08:44 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():name("WrongCat"){
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(std::string _name):name(_name){
    this->type = "WrongCat";
    std::cout << "WrongCat String Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
    this->type = other.getType();
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &WrongCat){
    std::cout << "WrongCat Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &WrongCat)
        this->type = WrongCat.type;

    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called" << std::endl;
}
