/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:07:46 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 11:43:06 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
    private:
        Brain *brain;
    public:
        WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat &wrongCat);
        ~WrongCat();

        void makeSound()const;
        void addIdea(std::string idea) const;
        std::string getIdea(int i) const;
};

#endif