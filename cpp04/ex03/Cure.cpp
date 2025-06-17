/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:45:17 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 15:24:06 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(){
    type = "cure";
    std::cout << "Cure Defualt Constructor Called" << std::endl;
}

Cure::~Cure(){
    std::cout << "Cure Destructor Called" << std::endl;
}

Cure::Cure(const Cure &other){
    *this = other;
    std::cout << "Cure Copy Constructor Called" << std::endl;
}

Cure& Cure::operator=(const Cure &cure){
    std::cout << "Cure Copy Assignement Constructor Called" << std::endl;
}

AMateria* Cure::clone() const{
    return new Cure(*this);
}


void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}