/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:48:59 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/26 14:24:14 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &cat);
        virtual ~Cat();

        void makeSound()const;
        void addIdea(std::string idea) const;
        std::string getIdea(int i) const;
};

#endif