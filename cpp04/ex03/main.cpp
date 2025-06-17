/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:24:24 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 15:31:36 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include <iostream>

int main ()
{
    AMateria* test = new Ice();

    AMateria* clonedIce = test->clone();

    std::cout << "Test Material Type: " << test->getType() << std::endl;
    
    return 0;
}