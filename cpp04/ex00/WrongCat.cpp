/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:06:59 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/22 20:16:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
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

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called" << std::endl;
}
