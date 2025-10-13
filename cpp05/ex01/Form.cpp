/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:10 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/13 16:25:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Form"), signedIndicator(false), gradeToSign(150),
    gradeToExec(150){}

Form::Form(std::string const _name, int _gradeToSign, int _gradeToExec): name(_name),
    signedIndicator(false), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec){
    if (gradeToExec < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToExec > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other): name(other.name),
    gradeToExec(other.gradeToExec),
    gradeToSign(other.gradeToSign),
    signedIndicator(other.signedIndicator){}

Form& Form::operator=(const Form& form){
    if (this != &form)
    {
        signedIndicator = form.signedIndicator;
    }
    return *this;
}

std::string Form::getName()const{return this->name;}

int Form::getGradeToSign() const{return gradeToSign;}

int Form::getGradeToExec() const{return gradeToExec;}

bool Form::isSigned() const{return this->signedIndicator;}

void Form::beSigned(const Bureaucrat& buro){
    if (buro.getGrade() <= gradeToSign)
        signedIndicator = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Form: Grade Too High Exception.";
}
const char* Form::GradeTooLowException::what() const throw(){
    return "Form: Grade Too Low Exception.";
}

std::ostream & operator<<(std::ostream & o, const Form & form){
    o << form.getName() << ", " << "sign grade: "
    << form.getGradeToSign() << ", " << "exec grade: "
    << form.getGradeToExec()<< " signed: " << (form.isSigned() ? "yes." : "no.") << std::endl;

    return o;
}