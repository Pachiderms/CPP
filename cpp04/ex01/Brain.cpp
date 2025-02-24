/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:00:08 by marvin            #+#    #+#             */
/*   Updated: 2025/02/24 11:00:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(const Brain &other){
    *this = other;
    std::cout << "Brain Copy Constructor Called" << std::endl;
}

Brain& Brain::operator=(const Brain &brain){
    std::cout << "Brain Copy  Assignement Constructor Called" << std::endl;

    if (this == &brain)
        return *this;

    for (int i=0; i<100; i++){
        if (brain.ideas[i].length() > 0)
            this->ideas[i].assign(brain.ideas[i]);
    }

    return *this;
}

void Brain::addIdea(std::string idea){
    for(int i=0; i<100; i++){
        if (this->ideas[i].empty()){
            this->ideas[i] = idea;
            return ;
        }
    }

    std::cout << "My Brain Is Full!" << std::endl;

    return ;
}
