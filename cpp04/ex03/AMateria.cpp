/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:31:27 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 15:51:28 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::~AMateria(){
    std::cout << "AMateria Destructor Called" << std::endl;
}

AMateria::AMateria(std::string const & _type){
    type = _type;
    std::cout << "AMateria Parameter Constructor Called" << std::endl;
}

AMateria::AMateria(const AMateria &other){
    *this = other;
    std::cout << "AMateria Copy Constructor Called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &amat){
    std::cout << "AMateria Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &amat)
        this->type = amat.type;

    return *this;
}

std::string const & AMateria::getType() const{
    return this->type;
}