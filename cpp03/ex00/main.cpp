/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:36:49 by tzizi             #+#    #+#             */
/*   Updated: 2025/05/20 18:04:46 by marvin           ###   ########.fr       */
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
    carlos.takeDamage(2);
    carlos.beRepaired(1);
    carlos.attack("random");

    return 0;
}