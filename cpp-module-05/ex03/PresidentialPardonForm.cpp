
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

//constructor called
PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), Form("PresidentialPardonForm", 25, 5)
{
      std::cout << "PresidentialPardonForm Contructor called\n";

}

//constructor called 
PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), _target("default")
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

// copy constructor called
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
{
     std:: cout << "copy constructor called\n";
     *this = copy;
}

// copy assignemnt called 
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &op)
{
     std::cout << "can't copy anything\n";
     return(*this);
}

// get target 
std::string PresidentialPardonForm::getTarget()
{
     return (this->_target);
}
 
 void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
     if (executor.getGrade() > getGradeExec())
          throw(Bureaucrat::GradeTooLowException());
     else if(this->getSigner() == false)
          throw(Form::NotSignerCausingByGrade());
     else
          std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
 }

PresidentialPardonForm::~PresidentialPardonForm()
{
     std::cout << "PresidentialPardonForm decostructor called\n";
}