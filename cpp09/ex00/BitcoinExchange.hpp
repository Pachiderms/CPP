/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:39:39 by tzizi             #+#    #+#             */
/*   Updated: 2026/02/04 10:39:39 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <stdexcept>
#include <cstdlib>

class BitcoinExchange 
{
    private:
        std::map<std::string, float> _data;

        bool isValidDate(const std::string &date) const;
        bool isValidValue(const std::string &value) const;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange(){};

        void loadDatabase(const std::string &file);

        class InvalidFileException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class InvalidFormatException : public std::runtime_error
        {
            public:
                InvalidFormatException(const std::string& err) : std::runtime_error(err){}
        };
};
