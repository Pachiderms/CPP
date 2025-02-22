/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:50 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/22 20:19:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    private:
        void (Animal::*sounds[3])()const;
        void SetPointers();

        void chill()const;
        void bark()const;
        void meow()const;
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &animal);
        ~Animal();

        std::string getType()const;
        void makeSound()const;
};

#endif