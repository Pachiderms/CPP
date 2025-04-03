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

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string _name, int _grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw(){
                return ("Grade Too High Exception");
            }
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw(){
                return ("Grade Too Low Exception");
            }
    };

    int getGrade();
    const std::string getName() const;
};

#endif