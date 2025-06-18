/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:04:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/18 15:48:04 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character() : ICharacter(){
    std::cout << "Character Defualt Constructor Called" << std::endl;
}

Character::Character(std::string const & _name) : ICharacter(_name){
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

    return *this;
}

std::string const & Character::getName() const{
    return name;
}

void Character::equip(AMateria* m){
    materials = m;
    return ;
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3)
        return;
    //materials[idx] = 0;
    return ;
}

void Character::use(int idx, ICharacter& target){
    materials->use(target);
    return ;
}