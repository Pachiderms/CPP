/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/20 16:53:22 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    int n = 10;
    const Animal *animals = new Animal[n];
    for (int i=0; i < n; i++){
        if (i < n / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i=0; i < n; i++){
        delete animals[i];
    }

    return 0;
}
