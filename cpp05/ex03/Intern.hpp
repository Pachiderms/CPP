/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:55:09 by marvin            #+#    #+#             */
/*   Updated: 2025/10/14 11:55:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
class AForm;

class Intern
{
    public:
        Intern(){};
        ~Intern(){};
        Intern(Intern const & other){};
        Intern& operator=(Intern const & other);
    public:
        AForm* makeForm(std::string const & type, std::string const & _target)const;
};