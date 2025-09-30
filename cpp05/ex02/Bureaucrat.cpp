/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:45 by pachiderms        #+#    #+#             */
/*   Updated: 2025/04/03 13:58:48 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
}

Bureaucrat::Bureaucrat(std::string const _name, int _grade): name(_name){
    try{
        if (_grade > 150)
        {
            grade = 150;
            throw GradeTooLowException();
        }
        else if (_grade <= 0)
        {
            grade = 1;
            throw GradeTooHighException();
        }
        else
            grade = _grade;
    }
    catch(std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat & other){
    (std::string)this->name = (std::string)other.name;
    this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& buro){
    if (this != &buro)
    {
        (std::string)this->name = buro.getName();
        this->grade = buro.grade;
    }
    return *this;
}

void Bureaucrat::signForm(AForm & AForm){
    try
    {
        AForm.beSigned(*this);
    }
    catch(std::exception& e)
    {
        std::cout << "Bureaucrat: " << this->name
        << ", couldn't sign " << "AForm: " << AForm.getName()
        << ", beacause: " << e.what() << std::endl;
        return;
    }
    std::cout << "Bureaucrat: " << this->name
        << ", signed" << ", AForm: " << AForm.getName() << std::endl;
    return;
}

void Bureaucrat::gradeIncrement(){
    try{
        if (grade - 1 <= 0)
            throw GradeTooHighException();
        else
            grade--;
    }
    catch(std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

void Bureaucrat::gradeDecrement(){
    try{
        if (grade + 1 > 150)
            throw GradeTooLowException();
        else
            grade++;
    }
    catch(std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

std::string Bureaucrat::getName()const{
    return this->name;
}

int Bureaucrat::getGrade()const{
    return this->grade;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat& buro){
    o << buro.getName() << ", " << "bureaucrat grade " << buro.getGrade() <<std::endl;
    return o;
}
