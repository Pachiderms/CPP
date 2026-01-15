# include "iter.hpp"
# include <iostream>
# include <strings.h>
# include <cctype>

template <typename T>
void const myFun(T const &e)
{
    std::cout << e << "/";
}

void Toupper(char &c){if (std::isalpha(c) != 0){c = std::toupper(c);}}

int main ()
{
    char charArray[4] = {'a', 'b', 'c', 'd'};
    int intArray[] = { 1, 2, 3, 4, 5, 6};
    std::string strArray[] = {"str1", "str2", "str3"};

    ::iter(charArray, (int)sizeof(charArray), myFun<char>);
    std::cout << "\n";
    ::iter(charArray, (int)sizeof(charArray), Toupper);
    ::iter(charArray, (int)sizeof(charArray), myFun<char>);
    std::cout << "\n";

    ::iter(intArray, (int)(sizeof(intArray)/sizeof(int)), myFun<int>);
    std::cout << "\n";

    ::iter(strArray, (int)(sizeof(strArray)/sizeof(std::string)), myFun<std::string>);
    std::cout << "\n";

    return 0;
}