/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:48:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 16:27:35 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"

ICharacter::ICharacter(){
    name = "Seiya";
    std::cout << "ICharacter Default Constructor Called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &other){
    std::cout << "Cure Copy Constructor Called" << std::endl;

    *this = other;
}

ICharacter& ICharacter::operator=(const ICharacter &icharcater){
    std::cout << "Cure Copy Assignement Constructor Called" << std::endl;

    return *this;
}