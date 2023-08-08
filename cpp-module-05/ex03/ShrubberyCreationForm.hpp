



#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstring>
#include <fstream>

class Form;

class ShrubberyCreationForm: public Form{

    private:
        std::string _target;
      public:

    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &op);
    void execute(Bureaucrat const & executor) ;

    std::string getTarget();
 
};

 

std::ostream &operator<<(std::ostream &ostr, Form &instance);


#endif