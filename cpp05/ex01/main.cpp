/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:58:31 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/13 16:21:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"
#include <iostream>

int main()
{
    Bureaucrat plus("plus", 99);
    std::cout << plus;

    Bureaucrat minus("minus", 50);
    std::cout << minus;
    
    try{
        Form f("My Form", 200, 50);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    Form *form = new Form();
    Form cp(*form);
    std::cout << cp;

    plus.signForm(*form);
    plus.signForm(cp);
    minus.signForm(*form);
    minus.signForm(cp);

    Form hf("HardForm", 50, 50);

    try{
        plus.signForm(hf);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        minus.signForm(hf);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }
    
    delete form;
    return 0;
}