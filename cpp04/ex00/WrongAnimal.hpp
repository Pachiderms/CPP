/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:49:27 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 16:07:36 by tzizi            ###   ########.fr       */
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
        WrongAnimal& operator=(const WrongAnimal &animal);
        ~WrongAnimal();

        std::string getType()const;
        void makeSound()const;
};

#endif