/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/21 10:09:32 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // int n = 10;
    // const Animal *animals[n];
    // for (int i=0; i < n; i++){
    //     if (i < n / 2)
    //         animals[i] = new Dog();
    //     else
    //         animals[i] = new Cat();
    // }
    // for (int i=0; i < n; i++){
    //     animals[i]->makeSound();
    // }
    // for (int i=0; i < n; i++){
    //     delete animals[i];
    // }

    //leaks comes from dog's and cat's brains
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    
    return 0;
}
