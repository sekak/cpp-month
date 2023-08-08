#include <iostream>
#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter S("nan");
    std::cout << "char: ";S.chara();
    std::cout << "int: ";S.integer();
    std::cout << "float: ";S.floating();
    std::cout << "double: ";S.doub();
     
}