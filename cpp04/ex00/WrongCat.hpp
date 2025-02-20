/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:07:46 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 16:08:39 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        std::string name;
    public:
        WrongCat();
        WrongCat(std::string _name);
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat &Cat);
        ~WrongCat();
};

#endif