/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:24:24 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/24 10:49:47 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"
# include <iostream>

// int main ()
// {
//     Ice* test = new Ice();

//     AMateria* copieddIce = new Ice(*test);

//     ICharacter* hyoga = new Character("Seiya");
//     Character* dummy = new Character("Dummy");

//     std::cout << "Test Material Type: " << test->getType() << std::endl;
//     delete test;
    
//     std::cout << "Cloned Material Type: " << copieddIce->getType() << std::endl;

//     hyoga->equip(copieddIce);

//     hyoga->use(0, *dummy);
//     hyoga->use(1, *dummy);

//     hyoga->unequip(0);
//     hyoga->use(0, *dummy);
    
//     hyoga->equip(copieddIce);

//     hyoga->use(0, *dummy);

//     AMateria* clonedIce = copieddIce->clone();

//     hyoga->equip(clonedIce);

//     ICharacter* dumDummy = new Character(*dummy);
//     Cure* cure = new Cure();
//     AMateria* copyCure = new Cure(*cure);
//     AMateria* clonedIceyIce = clonedIce->clone();

//     hyoga->equip(cure);
//     hyoga->equip(copyCure);
//     hyoga->equip(clonedIceyIce);
    
//     hyoga->use(1, *dummy);
//     hyoga->use(2, *dummy);
//     hyoga->use(3, *dummy);
//     hyoga->use(0, *dumDummy);
//     hyoga->use(4, *dummy);

//     hyoga->unequip(2);
//     hyoga->equip(clonedIceyIce);

//     hyoga->use(2, *dumDummy);

//     delete hyoga;
//     delete dummy;
//     delete dumDummy;
    
//     delete cure;

//     return 0;
// }

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}