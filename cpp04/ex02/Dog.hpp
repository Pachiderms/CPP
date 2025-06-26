/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:05 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/26 14:24:14 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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