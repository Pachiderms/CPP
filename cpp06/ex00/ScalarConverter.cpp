/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:45:21 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/07 13:21:41 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

// ScalarConverter::ScalarConverter(){
    
// }

// ScalarConverter::~ScalarConverter(){

// }

// ScalarConverter::ScalarConverter(const ScalarConverter & other){
//     *this = other;
// }


// ScalarConverter & ScalarConverter::operator=(const ScalarConverter sc){
//     (void)sc;
//     return *this;
// }


void ScalarConverter::printImpossibleCharInt() {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
}

void ScalarConverter::printChar(char c) {
        if (std::isprint(c))
            std::cout << "char: '" << c << "'\n";
        else
            std::cout << "char: Non displayable\n";
}

void ScalarConverter::printInt(long l) {
        if (l < static_cast<long>(std::numeric_limits<int>::min()) ||
            l > static_cast<long>(std::numeric_limits<int>::max()))
            std::cout << "int: impossible\n";
        else
            std::cout << "int: " << static_cast<int>(l) << "\n";
}

void ScalarConverter::printFloat(double d) {
        float f = static_cast<float>(d);
        if (std::isnan(f))
            std::cout << "float: nanf\n";
        else if (std::isinf(f)) {
            if (f < 0) std::cout << "float: -inff\n";
            else std::cout << "float: inff\n";
        } else {
            std::cout.setf(std::ios::fixed);
            std::cout.precision((f == static_cast<int>(f)) ? 1 : 6);
            std::cout << "float: " << f << "f\n";
            std::cout.setf(std::ios::fmtflags(0), std::ios::floatfield);
        }
}

void ScalarConverter::printDouble(double v) {
    if (std::isnan(v))
        std::cout << "double: nan\n";
    else if (std::isinf(v)) {
        if (v < 0) {std::cout << "double: -inf\n";}
        else {std::cout << "double: inf\n";}
    } else {
        std::cout.setf(std::ios::fixed);
        std::cout.precision((v == static_cast<long>(v)) ? 1 : 6);
        std::cout << "double: " << v << "\n";
        std::cout.setf(std::ios::fmtflags(0), std::ios::floatfield);
    }
}

void ScalarConverter::convert(const std::string & str){
    if (str == "nan" || str == "nanf") {
        printImpossibleCharInt();
        std::cout << "float: nanf\n";
        std::cout << "double: nan\n";
        return;
    }
    if (str == "+inf" || str == "inf" || str == "+inff" || str == "inff") {
        printImpossibleCharInt();
        std::cout << "float: inff\n";
        std::cout << "double: inf\n";
        return;
    }
    if (str == "-inf" || str == "-inff") {
        printImpossibleCharInt();
        std::cout << "float: -inff\n";
        std::cout << "double: -inf\n";
        return;
    }

    //if simple letter
    if (str.size() == 3 && str.c_str()[0] == '\'' && str.c_str()[str.size() - 1] == '\'') {
        char c = str[1];
        printChar(c);
        printInt(static_cast<long>(c));
        printFloat(static_cast<double>(c));
        printDouble(static_cast<double>(c));
        return;
    }

    //on enleve le f pour le type 'float'
    //bool isFloat = false;
    std::string num_part = str;
    if (str.size() > 1 && str[str.size() - 1] == 'f') {
        //isFloat = true;
        num_part = str.substr(0, str.size() - 1);
    }

    char* endptr = NULL;
    double val = strtod(num_part.c_str(), &endptr);//c_str Returns a pointer to an array that contains a null-terminated sequence of characters
    //Cette fonction, signifiant string to double, permet de transformer une chaîne de caractères
    //contenant la représentation textuelle d'un nombre flottant en une donnée typée double.
    //Si aucune valeur flottante n'a pu être décodée à partir de la chaîne 
    //alors la valeur de retour sera 0.0 et le pointeur stocké à l'intérieur du pointeur end
    //passé en second paramètre, sera égal à theString
    if (*endptr != '\0') {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
        return;
    }
        // char
    if (std::isnan(val) || std::isinf(val) || val < 0 || val > 127) {
        std::cout << "char: impossible\n";
    } else {
        char c = static_cast<char>(val);
        if (std::isprint(c))
            std::cout << "char: '" << c << "'\n";
        else
            std::cout << "char: Non displayable\n";
    }
        // int
    if (std::isnan(val) || std::isinf(val) ||
        val < static_cast<double>(std::numeric_limits<int>::min()) || //Returns the minimum finite value representable by the numeric type T ici int
        val > static_cast<double>(std::numeric_limits<int>::max())) {
        std::cout << "int: impossible\n";
    } else {
        int i = static_cast<int>(val);
        std::cout << "int: " << i << "\n";
    }
        // float
    {
        float f = static_cast<float>(val);
        if (std::isnan(f))
            std::cout << "float: nanf\n";
        else if (std::isinf(f)) {
            if (f < 0) {std::cout << "float: -inff\n";}
            else {std::cout << "float: inff\n";}
        } else {
                // show decimal point when integer-like
            std::cout.setf(std::ios::fixed);
            std::cout.precision((f == static_cast<int>(f)) ? 1 : 6);
            std::cout << "float: " << f << "f\n";
            std::cout.setf(std::ios::fmtflags(0), std::ios::floatfield);
        }
    }

        // double
    {
        if (std::isnan(val))
            std::cout << "double: nan\n";
        else if (std::isinf(val)) {
            if (val < 0) std::cout << "double: -inf\n";
            else std::cout << "double: inf\n";
        } else {
            std::cout.setf(std::ios::fixed);//max 3 decimals
            std::cout.precision((val == static_cast<long>(val)) ? 1 : 6);//si val est un entier on garde une decimal pour le .0 sinon on set la precision a 6 deciamles
            std::cout << "double: " << val << "\n";
            std::cout.setf(std::ios::fmtflags(0), std::ios::floatfield);//reset l'affichage une fois qu'on a finit.
        }
    }
}
