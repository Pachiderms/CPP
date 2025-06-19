/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grade.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:18:04 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 16:09:38 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define GRADE_HPP

# include <iostream>

class Grade
{
    private:
        int grade;
    public:
        Grade();
        Grade(int _grade);
        ~Grade() {}
    
        void Increment() const;
        void Decrement() const;
        int getGrade() const;

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
        
};