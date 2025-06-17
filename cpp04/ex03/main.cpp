/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:24:24 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 17:07:00 by tzizi            ###   ########.fr       */
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

    std::cout << "Test Material Type: " << test->getType() << std::endl;
    
    return 0;
}