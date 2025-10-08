/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:36:37 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 13:36:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct Data {
    std::string name;
    int         hp;
    int         attk;
    Data(std::string _name="Name", int _hp=0, int _attk=0) : name(_name), hp(_hp), attk(_attk){}
};

class Serializer
{
    private:
        Serializer(){};
        ~Serializer(){};
    public:
        static uintptr_t serialize(Data* ptr); //converti ptr en un unsigned int qui contient son adresse
        static Data* deserialize(uintptr_t raw);
};
