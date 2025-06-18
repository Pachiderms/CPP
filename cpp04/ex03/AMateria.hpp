/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:31:29 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/18 15:03:34 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria() {};
        virtual ~AMateria() {};
        AMateria(std::string const & type);
        AMateria(AMateria const &other);
        AMateria& operator=(const AMateria &mat);

        std::string const & getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
