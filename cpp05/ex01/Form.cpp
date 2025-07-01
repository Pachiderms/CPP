/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:10 by tzizi             #+#    #+#             */
/*   Updated: 2025/07/01 11:41:29 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : name("Form"), gradeToSign(150), gradeToExec(150){

}

Form::Form(std::string const _name, int _gradeToSign, int _gradeToExec): name(_name), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec){

}

// Form::Form(const Form &other){
//     (std::string)this->name = other.name;
//     // this->gradeToExec = other.gradeToExec;
//     // this->gradeToSign = other.gradeToSign;
// }

Form& Form::operator=(const Form& form){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &form)
    {
        (std::string)this->name = form.name;
        // gradeToExec = form.gradeToExec;
        // gradeToSign = form.gradeToSign;
    }
    return *this;
}

const void Form::gradeToSignIncrement(){
    return ;
}

const void Form::gradeToSignDecrement(){
    return ;
}

const void Form::gradeToExecIncrement(){
    return ;
}

const void Form::gradeToExecDecrement(){
    return ;
}

const std::string Form::getName()const{
    return this->name;
}

const int Form::getGradeToSign() const{
    return gradeToSign;
}

const int Form::getGradeToExec() const{
    return gradeToExec;
}

void Form::signForm(Bureaucrat & buro){
    if (signedIndicator){
        std::cout << "Form: " << name << " already signed" << std::endl;
        return ;
    }
    signedIndicator = beSigned(buro);
    if (signedIndicator)
        std::cout << "Bureaucrat: " << buro.getName()
        << " signed" << "Form: " << this->name << std::endl;
    else
        std::cout << "Bureaucrat: " << buro.getName()
        << " couldn't sign" << "Form: " << this->name
        << " because " << std::endl;
}

bool Form::beSigned(Bureaucrat & buro) const{
    try{
        if (buro.getGrade() <= gradeToSign)
            return true;
        else
            throw GradeTooLowException();
    }
    catch (std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return false;
}

// int Form::getGrade()const{
//     return this->grade;
// }

// void Form::signForm(Form form){
//     if (form.beSigned(*this)){std::cout << name << " signed " << form.getName() << std::endl;}
// }

std::ostream & operator<<(std::ostream & o, const Form & form){
    o << form.getName() << ", " << "sign grade "
    << form.getGradeToSign() << ", " << "exec grade "
    << form.getGradeToExec()<<std::endl;

    return o;
}