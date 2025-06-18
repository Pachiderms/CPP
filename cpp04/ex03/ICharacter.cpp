/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:48:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/18 15:27:28 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"

ICharacter::ICharacter(std::string const & _name){
    std::cout << "ICharacter Parameter Constructor Called" << std::endl;
    name = _name;
}

ICharacter::ICharacter(const ICharacter &other){
    std::cout << "ICharacter Copy Constructor Called" << std::endl;

    *this = other;
}

ICharacter& ICharacter::operator=(const ICharacter &icharcater){
    std::cout << "ICharacter Copy Assignement Constructor Called" << std::endl;

    return *this;
}