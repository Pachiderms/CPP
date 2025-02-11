/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:43:14 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/11 15:55:34 by pachiderms       ###   ########.fr       */
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
    bool found = false;
    int i =0;
    for (i; i < 4; i++){
        if (match[i] == level){
            found = true;
            break ;
        }
    }
    switch (found)
    {
    case  true:
        while (i < 4)
        {
            (this->*harlPtr[i])();
            i++;
        }
        break;
    default:
        std::cout << "[  Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
    return ;
}

void Harl::debug(){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
    return ;
}

void Harl::info(){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
    return ;
}

void Harl::warning(){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error(){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    return ;
}
