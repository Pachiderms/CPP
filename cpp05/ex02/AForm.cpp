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

AForm::AForm() : name("AForm"), target("target"), signedIndicator(false), gradeToSign(150),
    gradeToExec(150){}

AForm::AForm(std::string const &_name, std::string const &_target, int _gradeToSign, int _gradeToExec):
    name(_name), target(_target), signedIndicator(false),
    gradeToSign(_gradeToSign), gradeToExec(_gradeToExec){
    if (gradeToExec < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToExec > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm & other): name(other.name), target(other.target),
    gradeToExec(other.gradeToExec),
    gradeToSign(other.gradeToSign),
    signedIndicator(other.signedIndicator){}

AForm& AForm::operator=(const AForm & form){
    if (this != &form)
        signedIndicator = form.signedIndicator;
    return *this;
}

std::string AForm::getName()const{return this->name;}

std::string AForm::getTarget()const{return this->target;}

int AForm::getGradeToSign() const{return gradeToSign;}

int AForm::getGradeToExec() const{return gradeToExec;}

bool AForm::isSigned() const{return this->signedIndicator;}

void AForm::beSigned(const Bureaucrat& buro){
    if (buro.getGrade() <= gradeToSign)
        signedIndicator = true;
    else
        throw GradeTooLowException();
}

void AForm:: execute(Bureaucrat const & executor) const{
    std::cout << "Base Execution of a Form." << std::endl;
}

const char* AForm::GradeTooLowException::what() const throw(){
    return "Form: Grade Too Low Exception.";
}

const char* AForm::GradeTooHighException::what() const throw(){
    return "Form: Grade Too High Exception.";
}

const char* AForm::NotSignedException::what() const throw(){
    return "Form: Not Signed Exception.";
}

std::ostream & operator<<(std::ostream & o, const AForm & AForm){
    o << AForm.getName() << ", " << "sign grade: "
    << AForm.getGradeToSign() << ", " << "exec grade: "
    << AForm.getGradeToExec()<< " signed: " << (AForm.isSigned() ? "yes." : "no.") << std::endl;

    return o;
}
