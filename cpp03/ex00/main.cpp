/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/13 13:08:11 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap carlos("Test");

    carlos.attack("random");
    carlos.beRepaired(1);
    carlos.attack("random");
    carlos.attack("random");
    carlos.beRepaired(1);
    carlos.attack("random");
    carlos.attack("random");
    carlos.beRepaired(1);
    carlos.attack("random");
    carlos.attack("random");
    //10 actions
    carlos.beRepaired(1);
    carlos.attack("random");

    return 0;
}