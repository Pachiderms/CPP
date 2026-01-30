/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:14:54 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/30 10:45:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "limits"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file;

    file.open("data.csv");
    if (!file){
        throw InvalidFileException();
    }
    std::string line;
    getline(file, line, '\n');
    while (getline(file, line, '\n'))
    {
        std::string date = line.substr(0, 10);
        float mult = atof(line.substr(11).c_str());
        _data.insert(std::pair<std::string, float>(date, mult));
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    this->_data = other._data;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        this->_data = other._data;
    return *this;
}

void BitcoinExchange::loadDatabase(const std::string &filename)
{
    std::ifstream file;

    file.open(filename.c_str());
    if (!file){
        throw InvalidFileException();
    }
    std::string line;
    getline(file, line, '\n');
    // std::cout << line << std::endl;
    while (getline(file, line, '\n'))
    {
        // std::cout << line << std::endl;
        try{
            if (line.length() < 14)
                throw InvalidFormatException("bad input => " + line);
            if (line[4] != '-' || line[7] != '-' || line[11] != '|')
                throw InvalidFormatException("bad input => " + line);
            std::string date = line.substr(0, 10);
            // std::cout << "date: " << date << std::endl;
            float y=atof(date.substr(0, 4).c_str())
                , m=atof(date.substr(5, 2).c_str())
                , d=atof(date.substr(8, 2).c_str());
            if ((y <= 2009 && d < 02) || y < 2009 || m < 0 || d < 0 || m > 12 || d > 31){
                throw InvalidFormatException("not found in database: " + date);
            }
            float val = atof(line.substr(13).c_str());
            if (val < 0)
                throw InvalidFormatException("not a positive number.");
            if (val > 100)
                throw InvalidFormatException("too large number.");
            // std::cout << line.substr(13) << "." << std::endl;
            // std::cout << "val: " << val << std::endl;

            std::map<std::string, float>::iterator it;
            it = _data.find(date);
                
            if (it == _data.end())
            {
                it = _data.lower_bound(date);
                it--;
                if (val * it->second > std::numeric_limits<int>::max() || val * it->second > 1000)
                    throw InvalidFormatException("too large number.");
                // std::cout << "lower bound: " << it->first << std::endl;
                // std::cout << it->second << std::endl;
                std::cout << date << " => " << val << " = "
                    <<  val * it->second << std::endl;
            }else{
                if (val * it->second > std::numeric_limits<int>::max() || val * it->second > 1000)
                    throw InvalidFormatException("too large number.");
                // std::cout << "found: " << it->first << std::endl;
                // std::cout << it->second << std::endl;
                std::cout << date << " => " << val << " = "
                    <<  val * it->second << std::endl;
            }
        }catch(const std::exception& e){
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    
}


const char* BitcoinExchange::InvalidFileException::what() const throw()
{
    return "BitcoinExchange: Error: Invalid File Exception.";
}
