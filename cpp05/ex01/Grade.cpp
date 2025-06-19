/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grade.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:17:56 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 16:09:47 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Grade.hpp"

Grade::Grade() : grade(150){

}

Grade::Grade(int _grade){
    try{
        if (_grade > 150)
            throw GradeTooLowException();
        else if (_grade <= 0)
            throw GradeTooHighException();
        else
            grade = _grade;
    }
    catch(std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

void Grade::Increment() const{
    try{
        if (grade - 1 <= 0)
            throw GradeTooHighException();
        else
            grade--;
    }
    catch (std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

void Grade::Decrement() const{
    try{
        if (grade + 1 > 150)
            throw GradeTooLowException();
        else
            grade++;
    }
    catch (std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

int Grade::getGrade() const{
    return grade;
}
