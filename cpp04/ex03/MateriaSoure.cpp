/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSoure.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:04:59 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 11:11:07 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0;i < MAX_MATERIAS; i++){materias[i] = NULL;}
}

MateriaSource::~MateriaSource(){
    for (int i = 0;i < MAX_MATERIAS; i++){if (materias[i]) {delete materias[i];};}
}

MateriaSource::MateriaSource(const MateriaSource &other){
    *this = other;
}

void MateriaSource::learnMateria(AMateria* m){
    int i = 0;
    while (i < MAX_MATERIAS && materias[i])
        i++;
    if (i > MAX_MATERIAS - 1){std::cout << "Inventory is full" << std::endl; return;}
    materias[i] = m;
    return;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = MAX_MATERIAS - 1;i >= 0; i--){
        if (materias[i])
        {
            if (materias[i]->getType() == type)
                return materias[i]->clone();
        }
    }
    std::cout << "No materia matches the type given" << std::endl;
    return 0;
}