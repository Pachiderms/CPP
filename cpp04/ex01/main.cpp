/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/26 12:35:06 by tzizi            ###   ########.fr       */
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
    std::cout << "\n" << "MY TESTS (DEEP COPY)" << std::endl;
    
    const Dog* dog = new Dog();
    Dog* dogcpy = new Dog(*dog);

    dog->addIdea("i want a bone");

    std::cout << dog->getIdea(0) << std::endl;

    delete dog;

    dogcpy->addIdea("Idea after copy deleted");
    std::cout << dogcpy->getIdea(0) << std::endl;
    std::cout << dogcpy->getIdea(1) << std::endl;
    std::cout << dogcpy->getIdea(10) << std::endl;
    
    Dog basic;
    basic.addIdea("Base Idea");
    std::cout << basic.getIdea(0) << std::endl;
    std::cout << "SCOPE TEST" << std::endl;
    if (1)
    {
        Dog tmp = basic;
        std::cout << tmp.getIdea(0) << std::endl;
        std::cout << tmp.getIdea(1) << std::endl;
        std::cout << tmp.getIdea(2) << std::endl;
    }

    basic.addIdea("Idea after copy End of Scope");
    std::cout << basic.getIdea(0) << std::endl;
    std::cout << basic.getIdea(1) << std::endl;
    std::cout << basic.getIdea(10) << std::endl;

    delete dogcpy;

    return 0;
}
