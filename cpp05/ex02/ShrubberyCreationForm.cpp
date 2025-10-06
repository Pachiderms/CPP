/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:09:28 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/06 15:17:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("base_shrubberry", 145, 137){ 
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target + "_shrubbery", 145, 137){
    
}
// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other);
// ShrubberyCreationForm&::operator=(const ShrubberyCreationForm& scf) = delete;
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    std::ofstream file;
    file.open(this->getName());
    file << system("tree");
    file.close();
    return ;
}