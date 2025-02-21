/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:59 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/21 09:49:43 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        std::string name;
        Brain* brain;
    public:
        Cat();
        Cat(std::string _name);
        Cat(const Cat &other);
        Cat& operator=(const Cat &Cat);
        ~Cat();
};

#endif