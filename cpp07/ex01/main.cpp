# include "iter.hpp"
# include <iostream>
# include <strings.h>
# include <cctype>

template <typename T>
void myFun(T &e)
{
    std::cout << e << "/";
}

void Toupper(char &c){if (std::isalpha(c) != 0){c = std::toupper(c);}}

int main ()
{
    char charArray[4] = {'a', 'b', 'c', 'd'};
    int intArray[] = { 1, 2, 3, 4, 5, 6};
    std::string strArray[] = {"str1", "str2", "str3"};


    ::iter(charArray, (int)sizeof(charArray), myFun);
    std::cout << "\n";
    ::iter(charArray, (int)sizeof(charArray), Toupper);
    ::iter(charArray, (int)sizeof(charArray), myFun);
    std::cout << "\n";

    ::iter(intArray, (int)(sizeof(intArray)/sizeof(int)), myFun);
    std::cout << "\n";

    ::iter(strArray, (int)(sizeof(strArray)/sizeof(std::string)), myFun);
    std::cout << "\n";

    return 0;
}