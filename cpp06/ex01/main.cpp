/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:41:55 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 13:41:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

void printInfos(Data* data)
{
    std::cout << "adress: " << data << " name: " << data->name << "|hp: " << data->hp << "|attk: " << data->attk << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
}

int main()
{
    Data minion("minion", 10, 2);

    printInfos(&minion);

    Data* ptr = &minion;
    printInfos(ptr);

    minion.name = "name2";

    printInfos(&minion);
    printInfos(ptr);

    ptr->attk = 100;

    uintptr_t p = Serializer::serialize(ptr);
    minion.attk = 50;
    Data* e = Serializer::deserialize(p);

    printInfos(e);
    printInfos(ptr);
    printInfos(&minion);
    std::cout << "p value: " << p << std::endl;

    return 0;
}