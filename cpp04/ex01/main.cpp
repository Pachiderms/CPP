/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/24 12:45:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    

    j->makeSound(); //will output the cat sound!
    i->makeSound();
    
    const Animal* dogCopy = j;
    const Animal* catCopy(i);

    dogCopy->makeSound();
    catCopy->makeSound();
    
    delete j;
    delete i;


    std::cout << "\n" << "ANIMALS ARRAY" << std::endl;
    const Animal* animals[8];
    for (int i=0; i<8; i++){
        if (i < 4){
            animals[i] = new Dog();
        }else{
            animals[i] = new Cat();
        }
    }

    for (int i=0; i<8; i++){
        animals[i]->makeSound();
        delete animals[i];
    }
    std::cout << "\n" << "MY TESTS" << std::endl;
    
    Dog* dog = new Dog();

    dog->addIdea("i want a bone");

    delete dog;

    return 0;
}
