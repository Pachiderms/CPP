/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:50 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/17 14:08:24 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class A_Animal
{
    protected:
        std::string type;
    public:
        A_Animal();
        A_Animal(const A_Animal &other);
        A_Animal(std::string _type);
        A_Animal& operator=(const A_Animal &animal);
        virtual ~A_Animal();

        std::string getType()const;
        virtual void makeSound()const = 0;
};

#endif