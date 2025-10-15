/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:24:09 by marvin            #+#    #+#             */
/*   Updated: 2025/10/15 16:24:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <ctime>

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) { *this = other; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
    if (this != &other)
        _data = other._data;
    return *this;
}

bool BitcoinExchange::isValidDate(const std::string &date)const{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    int y = atoi(date.substr(0, 4).c_str());
    int m = atoi(date.substr(5, 2).c_str());
    int d = atoi(date.substr(8, 2).c_str());
    if (y < 2009 || m < 1 || m > 12 || d < 1 || d > 31)
        return false;
    return true;
}

bool BitcoinExchange::isValidValue(const std::string &value) const {
    char *end;
    double val = std::strtod(value.c_str(), &end);
    if (*end != '\0' || val < 0 || val > 1000)
        return false;
    return true;
}

void BitcoinExchange::loadDatabase(const std::string &filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw InvalidFileException();

    std::string line;
    std::getline(file, line); // skip header
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, value;
        if (!std::getline(ss, date, ',') || !std::getline(ss, value))
            continue;
        _data[date] = static_cast<float>(atof(value.c_str()));
    }
    file.close();
}

void BitcoinExchange::processInput(const std::string &filename) const {
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw InvalidFileException();

    std::string line;
    std::getline(file, line); // skip header
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, value;
        if (!std::getline(ss, date, '|') || !std::getline(ss, value)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        date.erase(date.find_last_not_of(" \t") + 1);
        value.erase(0, value.find_first_not_of(" \t"));

        if (!isValidDate(date)) {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        if (!isValidValue(value)) {
            std::cerr << "Error: invalid value => " << value << std::endl;
            continue;
        }

        double val = atof(value.c_str());
        std::map<std::string, float>::const_iterator it = _data.lower_bound(date);
        if (it == _data.end() || it->first != date) {
            if (it == _data.begin()) {
                std::cerr << "Error: no earlier data for date => " << date << std::endl;
                continue;
            }
            --it;
        }

        double result = val * it->second;
        std::cout << date << " => " << val << " = " << result << std::endl;
    }
}

const char* BitcoinExchange::InvalidFileException::what() throw(){
    return "Could not open file. ";
}
