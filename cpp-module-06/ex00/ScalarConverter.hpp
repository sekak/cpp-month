


#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>
#include <iomanip>



//different between class and static class is that a static class
//cannot be instantiaded or inherited and that all of the members
//of the class are static in nature,

  class ScalarConverter{
    private:
        std::string _string;
        int _int;
        float _float;
        double _double;
        char _char;
        bool    is_null;
        bool    is_nan;
    public:
        void integer();
        void chara();
        void floating();
        void doub();
         ScalarConverter(std::string convert);
        ScalarConverter(ScalarConverter &copy);
        ScalarConverter &operator=(ScalarConverter &op);
        ~ScalarConverter();
        std::string getString();
        void check_string();
};
#endif