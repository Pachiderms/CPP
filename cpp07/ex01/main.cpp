# include "iter.hpp"
# include <iostream>
# include <cctype>

void toUpper(char &e)
{
    e = std::toupper(e);
}

int main ()
{
    char charArray[] = {'a', 'b', 'c', 'd'};
    int intArray[] = { 1, 2, 3, 4};
    std::string strArray[] = {"str1", "str2", "str3"};


    for (size_t i=0; i < 4; i++){
        std::cout << charArray[i] << std::endl;
    }
    ::iter(charArray, 4, toUpper);
    for (size_t i=0; i < 4; i++){
        std::cout << charArray[i] << std::endl;
    }

    for (size_t i=0; i < 4; i++){
        std::cout << intArray[i] << std::endl;
    }
    ::iter(charArray, 4, toUpper);
    for (size_t i=0; i < 4; i++){
        std::cout << intArray[i] << std::endl;
    }

    // Not Working
    // for (size_t i=0; i < 3; i++){ 
    //     std::cout << strArray[i] << std::endl;
    // }
    // ::iter(strArray, 3, toUpper);
    // for (size_t i=0; i < 3; i++){
    //     std::cout << strArray[i] << std::endl;
    // }

    return 0;
}