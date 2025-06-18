/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:31:27 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/18 15:04:52 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(std::string const & type){
    _type = type;
    std::cout << "AMateria Parameter Constructor Called" << std::endl;
}

AMateria::AMateria(const AMateria &other){
    *this = other;
    std::cout << "AMateria Copy Constructor Called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &amat){
    std::cout << "AMateria Copy  Assignement Constructor Called" << std::endl;
    
    if (this != &amat)
        this->_type = amat._type;

    return *this;
}

std::string const & AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter& target){
    std::cout << "Base use function" << std::endl;
}