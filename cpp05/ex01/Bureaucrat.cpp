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

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
}

Bureaucrat::Bureaucrat(std::string const _name, int _grade): grade(_grade), name(_name){
}

Bureaucrat::Bureaucrat(const Bureaucrat &other){
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& buro){
    if (this != &buro)
    {
        (std::string)this->name = buro.getName();
        this->grade = buro.getGrade();
    }
    return *this;
}

void Bureaucrat::gradeIncrement(){
    grade.Increment();
    return ;
}

void Bureaucrat::gradeDecrement(){
    grade.Decrement();
    return ;
}

const std::string Bureaucrat::getName()const{
    return this->name;
}

int Bureaucrat::getGrade()const{
    return this->grade.getGrade();
}

void Bureaucrat::signForm(Form form){
    if (form.beSigned(*this)){std::cout << name << " signed " << form.getName() << std::endl;}
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat& buro){
    o << buro.getName() << ", " << "bureaucrat grade " << buro.getGrade() <<std::endl;
    return o;
}
