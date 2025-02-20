/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:36:14 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/11 12:36:14 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Number of params != 3!" << std::endl;
        return 0;
    }
    std::string file_name = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream file; //read open mod
    file.open(file_name);
    if (!file.is_open())
    {
        std::cout << "Failed to open :" << argv[1] << std::endl;
        return -1;
    }

    std::ofstream replaceFile; // write open mod
    replaceFile.open(file_name + ".replace");
    if (!replaceFile.is_open())
    {
        std::cout << "Failed to create :" << file_name + ".replace" << std::endl;
        return -1;
    }

    std::string line;
    std::string tmp;
    while (getline(file, line))
    {
        int i = 0;
        tmp = "";
        while (line[i]){
            if (!line.compare(i, s1.size(), s1)){
                tmp += s2;
                i+= s1.size();
            }
            else{
                tmp += line[i];
                i++;
            }
        }
        replaceFile << tmp << '\n';
    }

    file.close();
    replaceFile.close();

    return 0;
}