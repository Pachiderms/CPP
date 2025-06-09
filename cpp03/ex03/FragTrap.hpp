/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:12:20 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/09 15:52:47 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

//virtual key word to avoid ambiguity when multiple inheritance
//the class that will inherit from multiple classes that inherites ClapTrap
//will have the same virtual ClapTrap copy and share data from it
class FragTrap : virtual public ClapTrap
{
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