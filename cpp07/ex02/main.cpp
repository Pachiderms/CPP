/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:23:05 by marvin            #+#    #+#             */
/*   Updated: 2025/10/06 14:23:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

// int main ()
// {
//     Array<std::string> strs(5);
//     Array<char> c(10);

//     for (int i = 0; i < c.size();i++){
//         c[i] = ((int)'a' + i);
//     }

//     strs[0] = "str1";
//     strs[1] = "str2";
//     strs[2] = "str3";
//     strs[3] = "str4";
//     strs[4] = "str5";

//     std::cout << strs;
//     std::cout << c;

//     try{
//         std::cout << strs[5] << std::endl;
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }
//     try{
//         std::cout << strs[4] << std::endl;
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }

//     Array<char> cpy_char = c;

//     std::cout << cpy_char << std::endl;

//     try{
//         c[25] = 'x';
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }

//     try{
//         c[5] = 'x';
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }

//     std::cout << c << std::endl;
//     std::cout << cpy_char << std::endl;

//     return 0;
// }
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "OUT OF BOUNDS TEST" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    //std::cout << numbers;
    delete [] mirror;
    return 0;
}