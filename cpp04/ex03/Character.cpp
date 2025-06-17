/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:04:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 15:46:24 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(){
    std::cout << "Character Defualt Constructor Called" << std::endl;
}

Character::Character(std::string _name){
    name = _name;
    std::cout << "Character Parameter Constructor Called" << std::endl;
}

Character::~Character(){
    std::cout << "Character Destructor Called" << std::endl;
}

Character::Character(const Character &other){
    std::cout << "Character Copy Constructor Called" << std::endl;
}

Character& Character::operator=(const Character &character){
    std::cout << "Character Copy Assignement Constructor Called" << std::endl;
}

std::string const & Character::getName() const{
    return name;
}

void Character::equip(AMateria* m){
    return ;
}

void Character::unequip(int idx){
    
}

void Character::use(int idx, Character& target){
    
}