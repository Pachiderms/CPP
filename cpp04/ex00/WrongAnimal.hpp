/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:49:27 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/22 20:17:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    private:
        void (WrongAnimal::*sounds[3])()const;
        void SetPointers();

        void chill()const;
        void bark()const;
        void meow()const;
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal& operator=(const WrongAnimal &wrongAnimal);
        ~WrongAnimal();

        std::string getType()const;
        void makeSound()const;
};

#endif