/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:50 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 14:08:24 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal(std::string _type);
        AAnimal& operator=(const AAnimal &animal);
        virtual ~AAnimal();

        std::string getType()const;
        virtual void makeSound()const = 0;
};

#endif