



#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstring>
#include <fstream>

class Form;

class RobotomyRequestForm: public Form{

    private:
        std::string _target;
      public:

    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &op);
    void execute(Bureaucrat const & executor) ;

    std::string getTarget();
 
};

 

std::ostream &operator<<(std::ostream &ostr, Form &instance);


#endif