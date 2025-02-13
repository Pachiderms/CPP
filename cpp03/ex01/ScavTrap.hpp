/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:12:20 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/13 13:40:54 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        std::string Name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap& operator=(const ScavTrap &trap);
        ~ScavTrap();
        void attack(const std::string &target);
        void guardGate();
};

#endif