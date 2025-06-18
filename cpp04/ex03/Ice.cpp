/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:45:27 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/18 14:56:22 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    std::cout << "Ice Defualt Constructor Called" << std::endl;
}

Ice::~Ice(){
    std::cout << "Ice Destructor Called" << std::endl;
}

Ice::Ice(const Ice &other){
    *this = other;
    std::cout << "Ice Copy Constructor Called" << std::endl;
}

Ice& Ice::operator=(const Ice &ice){
    if (this != &ice)
    {
        _type = ice._type;
    }
    std::cout << "Ice Copy Assignement Constructor Called" << std::endl;
    return *this;
}

AMateria* Ice::clone() const{
    return new Ice(*this);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt " << target.getName() << " *" << std::endl;
}