

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Form;

class Intern
{

public:
    Intern(){};
    // Intern(std::string name);
    // Intern(std::string name, int grade);
    ~Intern(){};
    // Intern(const Intern &copy);
    // Intern &operator=(const Intern &op);
    Form *makeForm(std::string name, std::string target);
    // static Form *makePresident(std::string target);
    // static Form *makeRobot(std::string target);
    // static Form *makeShrubbery(std::string target);
};

std::ostream &operator<<(std::ostream &ostr, Intern &instance);

#endif