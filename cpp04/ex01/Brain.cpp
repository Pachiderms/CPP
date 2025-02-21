/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:20:25 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/21 10:07:33 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain &other){
    std::cout << "Brain Copy Constructor Called" << std::endl;
}

Brain& Brain::operator=(const Brain &brain){
    std::cout << "Brain Copy  Assignement Constructor Called" << std::endl;
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain Destructor Called" << std::endl;
}
