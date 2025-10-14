/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:09:28 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/13 17:26:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
    AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & other): AForm(other) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & shrubbery) {
    AForm::operator=(shrubbery);
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (!isSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > AForm::getGradeToExec())
        throw AForm::GradeTooLowException();
    std::ofstream ofs(getTarget() + "_shrubbery");
    if (!ofs)
        return;
    ofs << "       _-_\n"
           "    /~~   ~~\\\n"
           " /~~         ~~\\\n"
           "{               }\n"
           " \\  _-     -_  /\n"
           "   ~  \\\\ //  ~\n"
           "_- -   | | _- _\n"
           "  _ -  | |   -_\n"
           "      // \\\\" << std::endl;
    ofs.close();
}
