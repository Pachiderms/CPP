/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/26 14:23:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool signedIndicator=false;
        const int gradeToSign;
        const int gradeToExec;
    public:
        Form() {}
        Form(std::string const _name, int _gardeToSign, int _gradeToExec);
        Form(const Form &other);
        Form& operator=(const Form& form) = delete;
        virtual ~Form() {}

        virtual void execute(Bureaucrat const & executor) const;
        
        std::string getName() const;
        bool isSigned() const;

        void beSigned(const Bureaucrat& buro);

        int getGradeToSign() const;
        int getGradeToExec() const;

        class AlreadySignedException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Form Already Signed Exception.");
                }
        };

        class NotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Form Not Signed Exception.");
                }
        };

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade Too High To Sign Form Exception.");
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade Too Low To Sign Form Exception.");
                }
        };
        
};

std::ostream& operator<<(std::ostream & o, const Form & form);
