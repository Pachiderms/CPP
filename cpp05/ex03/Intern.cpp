/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:00:50 by marvin            #+#    #+#             */
/*   Updated: 2025/10/14 12:00:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstring>

Intern& Intern::operator=(Intern const & other){(void)other; return *this;}

AForm* Intern::makeForm(std::string const & type, std::string const & _target)const{
    const char* types[] = {"shrubbery", "robotomy request", "presidential pardon"};
    AForm* (*c[])(const std::string &) = {
        [](const std::string &t)->AForm* { return new ShrubberyCreationForm(t); },
        [](const std::string &t)->AForm* { return new RobotomyRequestForm(t); },
        [](const std::string &t)->AForm* { return new PresidentialPardonForm(t); }
    };
    for (int i = 0; i < 3; ++i) {
        if (type == types[i]) {
            AForm *form = c[i](_target);
            std::cout << "Intern creates " << form->getName() << std::endl;
            return form;
        }
    }
    std::cout << "Form: " << type << "\" does not exist" << std::endl;
    return NULL;
}