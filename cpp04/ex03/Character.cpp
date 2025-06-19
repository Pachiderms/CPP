/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:04:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 12:03:33 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(){
    for (int i = 0; i < MAX_MATERIAS; i++){materias[i] = NULL;}
    std::cout << "Character Defualt Constructor Called" << std::endl;
}

Character::Character(std::string const & _name) : name(_name){
    for (int i = 0; i < MAX_MATERIAS; i++){materias[i] = NULL;}
    std::cout << "Character Parameter Constructor Called" << std::endl;
}

Character::~Character(){
    std::cout << "Character Destructor Called" << std::endl;
    for (int i = 0; i < MAX_MATERIAS; i++){if (materias[i]){delete materias[i];};}
}

Character::Character(const Character &other){
    *this = other;
    std::cout << "Character Copy Constructor Called" << std::endl;
}

Character& Character::operator=(const Character &character){
    std::cout << "Character Copy Assignement Constructor Called" << std::endl;
    for (int i = 0; i < MAX_MATERIAS; i++){materias[i] = NULL;}
    if (this != &character)
    {
        name = character.getName();
        for (int i = 0; i < MAX_MATERIAS; i++){if (character.materias[i]) { materias[i] = character.materias[i]->clone();}}
    }
    return *this;
}

std::string const & Character::getName() const{
    return name;
}

void Character::equip(AMateria* m){
    int i = 0;
    while (i < MAX_MATERIAS && materias[i])
        i++;
    if (i > MAX_MATERIAS - 1){std::cout << "Inventory is full" << std::endl; return;}
    materias[i] = m;
    std::cout << "Character " << getName() << " as equiped " << m->getType() << std::endl;
    return ;
}

void Character::unequip(int idx){
    if (idx < 0 || idx > MAX_MATERIAS)
        return;
    if (materias[idx]){
        AMateria* m = materias[idx];
        materias[idx] = NULL;
        std::cout << "Character " << getName() << " as unequiped his " << idx << "st materia: " << m->getType() << std::endl;
    }
    return ;
}

void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx > MAX_MATERIAS - 1)return;
    if (!materias[idx]){std::cout << "No materia at index: " << idx << std::endl; return;}

    materias[idx]->use(target);
    return ;
}