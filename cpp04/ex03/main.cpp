/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:24:24 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/18 15:45:48 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include <iostream>

int main ()
{
    AMateria* test = new Ice();

    AMateria* clonedIce = test->clone();

    ICharacter* seiya = new Character("Seiya");
    ICharacter* dummy = new Character("Dummy");

    std::cout << "Test Material Type: " << test->getType() << std::endl;
    delete test;
    
    std::cout << "Cloned Material Type: " << clonedIce->getType() << std::endl;
    //delete clonedIce;


    seiya->equip(clonedIce);

    seiya->use(0, *dummy);

    delete clonedIce;
    delete seiya;
    delete dummy;
    
    return 0;
}