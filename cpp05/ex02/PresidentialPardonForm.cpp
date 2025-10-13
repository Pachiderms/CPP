/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:49:12 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/13 17:26:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string & target):
    AForm("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other): AForm(other) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & pr) {
    AForm::operator=(pr);
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!isSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > AForm::getGradeToExec())
        throw AForm::GradeTooLowException();
    std::cout << getTarget() << " has been pardoned by Manu." << std::endl;
}
