/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:05 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 11:52:45 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &dog);
        virtual ~Dog();

        void makeSound()const;
        void addIdea(std::string idea) const;
        std::string getIdea(int i) const;
};

#endif