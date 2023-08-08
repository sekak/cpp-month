#include "ScalarConverter.hpp"


//constructor
ScalarConverter::ScalarConverter(std::string convert): _string(convert)
{
    this->is_null = false;
    this->is_nan = false;
    std::cout << "constructor called\n";
     check_string();

}   

// copy constructor
ScalarConverter::ScalarConverter(ScalarConverter &copy)
{
    std::cout << "constructor called\n";
    *this = copy;
}

//copy assignement operator
ScalarConverter &ScalarConverter::operator=(ScalarConverter &op)
{
    std::cout << "copy assignement operator\n";
    this->_string = op._string;
    return(*this);
}

// get string
std::string ScalarConverter::getString()
{
    return(this->_string);
}

//deconstructor
ScalarConverter::~ScalarConverter()
{
    std::cout << "deconstructor called\n";
}

//check string 
void ScalarConverter::check_string()
{
    if(getString() == "0")
        this->is_null = true;
    if(getString() == "nan")
        this->is_nan = true;
}

//char
void ScalarConverter::chara()
{
    char t;
 
    if(!this->is_null && !this->is_nan)
    {
        t = std::stoi(getString());
        std::cout << t  << std::endl;
    }
    else if(this->is_nan)
        std::cout << "impossible\n";
    else 
        std::cout << "Non displayable\n";
}

// integer
void  ScalarConverter::integer()
{
     if(!this->is_nan)
        std::cout << std::stoi(getString()) << std::endl;
    else
        std::cout << "impossible\n";
}


// float
void ScalarConverter::floating()
{
    if(!this->is_nan)
         std::cout << std::fixed << std::setprecision(1)<< std::stof(getString()) <<"f\n";
      else if(this->is_nan)
        std::cout << "nanf\n";
    else
        std::cout << "impossible\n";

}

// double
void ScalarConverter::doub()
{
    if(!this->is_nan)
         std::cout << std::fixed << std::setprecision(1)<< std::stod(getString()) <<"\n";
      else if(this->is_nan)
        std::cout << "nan\n";
    else
        std::cout << "impossible\n";

}