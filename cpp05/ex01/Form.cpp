/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:10 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/06 15:16:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Form"), signedIndicator(false), gradeToSign(150), gradeToExec(150){

}

Form::Form(std::string const _name, int _gradeToSign, int _gradeToExec): name(_name), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec){

}

Form::Form(const Form &other): name(other.name), gradeToExec(other.gradeToExec), gradeToSign(other.gradeToSign){
}

// Form& Form::operator=(const Form& form){
//     std::cout << "Copy assignment operator called" << std::endl;
//     if (this != &form)
//     {
//         (std::string)this->name = form.name;
//         gradeToExec = form.gradeToExec;
//         gradeToSign = form.gradeToSign;
//     }
//     return *this;
// }

std::string Form::getName()const{
    return this->name;
}

int Form::getGradeToSign() const{
    return gradeToSign;
}

int Form::getGradeToExec() const{
    return gradeToExec;
}

void Form::beSigned(const Bureaucrat& buro){
    if (this->signedIndicator){
        throw AlreadySignedException();
    }
    else if (buro.getGrade() <= this->gradeToSign){
        this->signedIndicator = true;
    }
    else
        throw GradeTooLowException();
}

bool Form::isSigned() const{
    return this->signedIndicator;
}

std::ostream & operator<<(std::ostream & o, const Form & form){
    o << form.getName() << ", " << "sign grade "
    << form.getGradeToSign() << ", " << "exec grade "
    << form.getGradeToExec()<< " signed: " << (form.isSigned() ? "yes." : "no.") << std::endl;

    return o;
}