/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:12:20 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/13 13:53:59 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        std::string Name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap& operator=(const FragTrap &trap);
        ~FragTrap();
        void attack(const std::string &target);
        void guardGate();
        void highFivesGuy();
};

#endif