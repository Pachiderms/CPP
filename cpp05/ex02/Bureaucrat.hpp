/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:49 by pachiderms        #+#    #+#             */
/*   Updated: 2025/04/03 13:58:45 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string _name, int _grade);
        Bureaucrat(const Bureaucrat & other);
        Bureaucrat& operator=(const Bureaucrat & buro);
        ~Bureaucrat() {}

        void signForm(Form & form);
        void gradeIncrement();
        void gradeDecrement();
        int getGrade() const;
        std::string getName() const;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade Too High Exception.");
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade Too Low Exception.");
                }
        };
};

std::ostream& operator<<(std::ostream & o, const Bureaucrat & buro);

#endif