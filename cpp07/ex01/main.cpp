# include "iter.hpp"
# include <iostream>
# include <strings.h>
# include <cctype>

template <typename T>
void myFun(T &e)
{
    std::cout << "My fun: " << e << std::endl;
}

int main ()
{
    char charArray[] = {'a', 'b', 'c', 'd'};
    int intArray[] = { 1, 2, 3, 4};
    std::string strArray[] = {"str1", "str2", "str3"};


    for (int i=0; i < 4; i++){
        std::cout << charArray[i] << "|";
    }
    std::cout << "\n";
    ::iter(charArray, 4, myFun);

    for (int i=0; i < 4; i++){
        std::cout << intArray[i] << "|";
    }
    std::cout << "\n";
    ::iter(intArray, 4, myFun);

    for (int i=0; i < 3; i++){ 
        std::cout << strArray[i] << "|";
    }
    std::cout << "\n";
    ::iter(strArray, 3, myFun);

    return 0;
}