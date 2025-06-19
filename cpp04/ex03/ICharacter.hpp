/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:38:11 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 09:30:08 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define ICHARACTER_HPP

# include <iostream>
class AMateria;

#define MAX_MATERIAS 4

class ICharacter
{
    protected:
        std::string name;
        AMateria* materias[MAX_MATERIAS];
    public:
        ICharacter() {};
        virtual ~ICharacter() {}
        ICharacter(std::string const &  _name);
        ICharacter(const ICharacter &other);
        ICharacter& operator=(const ICharacter &character);

        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};
