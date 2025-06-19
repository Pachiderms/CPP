/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:54 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 14:08:30 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal(){
    std::cout << "A_Animal Default Constructor Called" << std::endl;
}

A_Animal::A_Animal(std::string _type){
    std::cout << "A_Animal Parameter Constructor Called" << std::endl;
    type = _type;
}

A_Animal::~A_Animal(){
    std::cout << "A_Animal Destructor Called" << std::endl;
}

std::string A_Animal::getType()const{
    return this->type;
}
