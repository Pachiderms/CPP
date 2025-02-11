/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:43:14 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/11 15:29:31 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl(){
    this->harlPtr[0] = &Harl::debug;
    this->harlPtr[1] = &Harl::info;
    this->harlPtr[2] = &Harl::warning;
    this->harlPtr[3] = &Harl::error;
}

void Harl::complain(std::string level){
    std::string match[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++){
        if (match[i] == level)
            (this->*harlPtr[i])();
    }
    return ;
}

void Harl::debug(){
    std::cout << "DEBUG" << std::endl;
    std::cout << "Debug debug debug debug." << std::endl;
    return ;
}

void Harl::info(){
    std::cout << "INFO" << std::endl;
    std::cout << "Infos infos infos infos infos." << std::endl;
    return ;
}

void Harl::warning(){
    std::cout << "WARNING" << std::endl;
    std::cout << "Warning warnig warning warning." << std::endl;
    return ;
}

void Harl::error(){
    std::cout << "ERROR" << std::endl;
    std::cout << "Error error error error." << std::endl;
    return ;
}
