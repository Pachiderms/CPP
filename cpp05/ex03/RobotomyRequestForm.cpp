/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:49:06 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/14 12:36:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
    AForm("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other): AForm(other) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & robot) {
    AForm::operator=(robot);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!isSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > AForm::getGradeToExec())
        throw AForm::GradeTooLowException();
    srand(time(NULL));
    int r = std::rand() % 2;
    if (r == 0)
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed on " << getTarget() << std::endl;
}
