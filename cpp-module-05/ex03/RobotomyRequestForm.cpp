
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

// constructor shrubbery
RobotomyRequestForm::RobotomyRequestForm() : _target("default"), Form("RobotomyRequestForm", 72, 45)
{
     std::cout << "RobotomyRequestForm Contructor called " << this->_target << std::endl;
}

// constructor shrubbery with target argument
RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), Form("RobotomyRequestForm", 72, 45)
{
     std::cout << "RobotomyRequestForm Contructor called " << this->_target << std::endl;
}

// copy constructor called
 RobotomyRequestForm::RobotomyRequestForm(  RobotomyRequestForm &copy)
{
     std::cout << "copy constructor called \n";
     *this = copy;
}

// copy assignement operator
 RobotomyRequestForm &RobotomyRequestForm::operator=(const  RobotomyRequestForm &d)
{
     std::cout << "can't copy assignement operator\n";
     return(*this);
}



// RobotomyRequestForm &operator=(const RobotomyRequestForm &op);

std::string RobotomyRequestForm::getTarget()
{
     return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
     if (executor.getGrade() > getGradeExec())
          throw(Bureaucrat::GradeTooLowException());
     else if (this->getSigner() == false)
          throw(Form::NotSignerCausingByGrade());
     else if(std::rand() % 2)
          std::cout <<"RRRRBGGGGBRRRRR  "<< getTarget() << "  has been robotomized successfully 50% of the time\n";
     else
          std::cout << "Robotomy is fialed\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
     std::cout << "RobotomyRequestForm decostructor called\n";
}