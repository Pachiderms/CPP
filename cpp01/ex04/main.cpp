/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:36:14 by marvin            #+#    #+#             */
/*   Updated: 2025/02/11 12:36:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string Replace(std::ifstream file, std::string s1, std::string s2)
{
    std::string line;
    std::string res;
    while (getline(file, line))
    {
        int i = 0;
        while (line[i]){
            if (!line.compare(i, s2.size(), s1))
            {
                line.replace(i, s2.size(), s2);
            }
            i++;
        }
        res += line;
    }
    return res;
}

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

    std::ifstream file;
    file.open(file_name);
    if (!file.is_open())
    {
        std::cout << "Failed to open :" << argv[1] << std::endl;
        return -1;
    }

    std::ofstream replaceFile;
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