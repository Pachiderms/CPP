/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:08:57 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/24 10:45:04 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materias[MAX_MATERIAS];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource & operator=(const MateriaSource & mat);
        virtual ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};