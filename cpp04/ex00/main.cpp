/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/22 20:23:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    const WrongAnimal* smurf = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();

    std::cout << k->getType() << " " << std::endl;

    k->makeSound(); //will output the cat sound!
    smurf->makeSound();

    const Animal* dogCopy = j;
    const Animal* catCopy(i);

    dogCopy->makeSound();
    catCopy->makeSound();
    
    
    delete j;
    delete i;
    delete meta;
    delete k;
    delete smurf;
    return 0;
}
