



#ifndef  PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstring>
#include <fstream>

class Form;

class PresidentialPardonForm: public Form{

    private:
        std::string _target;
      public:

    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &op);
    void execute(Bureaucrat const & executor) ;

    std::string getTarget();
 
};

 

std::ostream &operator<<(std::ostream &ostr, Form &instance);


#endif