/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:05 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/21 09:49:53 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        std::string name;
        Brain* brain;
    public:
        Dog();
        Dog(std::string _name);
        Dog(const Dog &other);
        Dog& operator=(const Dog &Dog);
        ~Dog();
};

#endif