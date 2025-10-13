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
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
}

Bureaucrat::Bureaucrat(std::string const &_name, int _grade): name(_name){
    if (_grade > 150)
        throw GradeTooLowException();
    else if (_grade <= 0)
        throw GradeTooHighException();
    else
        grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other): name(other.name), grade(other.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& buro){
    if (this != &buro)
        this->grade = buro.grade;

    return *this;
}

void Bureaucrat::gradeIncrement(){
    if (grade <= 1)
            throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::gradeDecrement(){
    if (grade >= 150)
            throw GradeTooLowException();
    else
        grade++;
}

void Bureaucrat::signForm(Form & form){
    try{
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch(Form::GradeTooLowException & e){
        std::cerr << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::string Bureaucrat::getName()const{return this->name;}

int Bureaucrat::getGrade()const{return this->grade;}

std::ostream & operator<<(std::ostream & o, const Bureaucrat& buro){
    o << buro.getName() << ", " << "bureaucrat grade " << buro.getGrade() << std::endl;
    return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Bureaucrat: Grade Too High Exception.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Bureaucrat: Grade Too Low Exception.";
}
