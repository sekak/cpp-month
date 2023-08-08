
#include "Intern.hpp"

// default constructor
// Intern::Intern()  
// {
//     std::cout << "constructor called Internn.\n";
// }

 

// copy constructor
// Intern::Intern(const Intern &copy)
// {
//     std::cout << "copy constructor\n";
//     *this = copy;
// }

// copy assignement operator
// Intern &Intern::operator=(const Intern &op)
// {
//     std::cout << "copy assignment operator\n";
//     this->_grade = op._grade;
//     return (*this);
// }

static Form *makeShrubbery(std::string target)
{
    return(new ShrubberyCreationForm(target));
}

static Form *makeRobot(std::string target)
{
    return(new RobotomyRequestForm(target));
}

static Form *makePresident(std::string target)
{
    return(new PresidentialPardonForm(target));
}
 
  Form *Intern::makeForm(std::string name , std::string target)
{
    Form *(*array[])(std::string target) = {&makeShrubbery,&makeRobot, &makePresident};
    std::string forms[] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
     for (int i = 0; i < 3; i++)
     {
        if(forms[i] == name)
        {
            std::cout << "Intern creates " << name  << " now\n";
            return((array[i])(target));
        }
     }
    std::cout << "\033[33mIntern can not create a form called \n";
    return(NULL);
}  


// overloaded
std::ostream &operator<<(std::ostream &ostr, Intern &instance)
{
    ostr <<  ", Intern grade "   << std::endl;
    return ostr;
}
 