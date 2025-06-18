/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:38:11 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/18 15:30:16 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define ICHARACTER_HPP

# include <iostream>
class AMateria;

class ICharacter
{
    protected:
        std::string name;
        AMateria *materials;
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
