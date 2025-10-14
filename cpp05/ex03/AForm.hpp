/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/30 15:01:34 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        const std::string target;
        bool signedIndicator;
        const int gradeToSign;
        const int gradeToExec;
    public:
        AForm();
        AForm(std::string const &_name, std::string const &_target,
            int _gardeToSign, int _gradeToExec);
        AForm(const AForm &other);
        AForm& operator=(const AForm& form);
        virtual ~AForm() {}

        virtual void execute(Bureaucrat const & executor) const;
        
        std::string getName() const;
        std::string getTarget()const;
        bool isSigned() const;

        void beSigned(const Bureaucrat& buro);

        int getGradeToSign() const;
        int getGradeToExec() const;

        class NotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        
};

std::ostream& operator<<(std::ostream & o, const AForm & AForm);
