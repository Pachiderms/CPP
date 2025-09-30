/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:10 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/26 14:08:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("AForm"), signedIndicator(false), gradeToSign(150), gradeToExec(150){

}

AForm::AForm(std::string const _name, int _gradeToSign, int _gradeToExec): name(_name), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec){

}

AForm::AForm(const AForm &other): name(other.name), gradeToExec(other.gradeToExec), gradeToSign(other.gradeToSign){
}

// AForm& AForm::operator=(const AForm& form){
//     std::cout << "Copy assignment operator called" << std::endl;
//     if (this != &AForm)
//     {
//         (std::string)this->name = AForm.name;
//         gradeToExec = AForm.gradeToExec;
//         gradeToSign = AForm.gradeToSign;
//     }
//     return *this;
// }

std::string AForm::getName()const{
    return this->name;
}

int AForm::getGradeToSign() const{
    return gradeToSign;
}

int AForm::getGradeToExec() const{
    return gradeToExec;
}

void AForm::beSigned(const Bureaucrat& buro){
    if (this->signedIndicator){
        throw AlreadySignedException();
    }
    else if (buro.getGrade() <= this->gradeToSign){
        this->signedIndicator = true;
    }
    else
        throw GradeTooLowException();
}

void AForm:: execute(Bureaucrat const & executor) const{
    std::cout << "Base Execution of a Form." << std::endl;
}

bool AForm::isSigned() const{
    return this->signedIndicator;
}

std::ostream & operator<<(std::ostream & o, const AForm & AForm){
    o << AForm.getName() << ", " << "sign grade "
    << AForm.getGradeToSign() << ", " << "exec grade "
    << AForm.getGradeToExec()<< " signed: " << (AForm.isSigned() ? "yes." : "no.") << std::endl;

    return o;
}