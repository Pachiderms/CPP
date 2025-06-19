/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:10 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 16:01:51 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : name("Form"), gradeToSign(150), gradeToExec(150){

}

Form::Form(std::string const _name, int _gradeToSign, int _gradeToExec): name(_name), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec){

}

Form::Form(const Form &other){
    *this = other;
}

Form& Form::operator=(const Form& form){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &form)
    {
        (std::string)this->name = form.getName();
        this->gradeToExec = form.gradeToExec;
        gradeToSign = form.gradeToSign;
    }
    return *this;
}

void Form::gradeToSignIncrement(){
    try{
        if (--grade < 0)
            throw GradeTooHighException();
        else
            return;
    }
    catch (std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

void Form::gradeToSignDecrement(){
    try{
        if (++grade > 150)
            throw GradeTooHighException();
        else
            return;
    }
    catch (std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

void Form::gradeToExecIncrement(){
    gradeToExec.Increment();
    return ;
}

void Form::gradeToExecDecrement(){
    try{
        if (++grade > 150)
            throw GradeTooHighException();
        else
            return;
    }
    catch (std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

const std::string Form::getName()const{
    return this->name;
}

int Form::getGrade()const{
    return this->grade;
}

void Form::signForm(Form form){
    if (form.beSigned(*this)){std::cout << name << " signed " << form.getName() << std::endl;}
}

std::ostream & operator<<(std::ostream & o, const Form& buro){
    o << buro.getName() << ", " << "bureaucrat grade " << buro.getGrade() <<std::endl;
    return o;
}