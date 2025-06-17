/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:48:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 15:00:09 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"

ICharacter::ICharacter(){
    name = "Seiya";
    std::cout << "ICharacter Default Constructor Called" << std::endl;
}

ICharacter::~ICharacter(){
    std::cout << "ICharacter Destructor Called" << std::endl;
}