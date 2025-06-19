/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 11:24:10 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Dog* dog = new Dog();
    const Cat* cat = new Cat();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    
    const WrongAnimal* smurf = new WrongCat();
    const WrongCat* k = new WrongCat();

    std::cout << k->getType() << std::endl;
    std::cout << smurf->getType() << std::endl;

    k->makeSound(); //will output the cat sound!
    smurf->makeSound();

    const Animal* catCopy = new Cat(*cat);

    catCopy->makeSound();
    
    delete j;
    delete i;
    delete dog;
    delete cat;
    delete catCopy;
    delete k;
    delete smurf;
    return 0;
}
