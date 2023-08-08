
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

//constructor called
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form("ShrubberyCreationForm", 145, 137)
{
      std::cout << "ShrubberyCreationForm Contructor called\n";

}

//constructor called 
ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

// copy constructor called
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
{
     std:: cout << "copy constructor called\n";
     *this = copy;
}

// copy assignemnt called 
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op)
{
     std::cout << "can't copy anything\n";
     return(*this);
}

// get target 
std::string ShrubberyCreationForm::getTarget()
{
     return (this->_target);
}
 
 void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
     if (executor.getGrade() > getGradeExec())
          throw(Bureaucrat::GradeTooLowException());
     else if(this->getSigner() == false)
          throw(Form::NotSignerCausingByGrade());
     else
     {
          // Create and open a text file
          std::ofstream Myfile(this->getTarget().append("_shrubbery").c_str());
          // write to the file
          Myfile << "          " << std::endl
          << "       **     " << std::endl
          << "      ****      " << std::endl
          << "     ******     " << std::endl
          << "    ********    " << std::endl
          << "   **********   " << std::endl
          << "  ************  " << std::endl
          << " ************** " << std::endl
          << "       **       " << std::endl
          << "       **       " << std::endl;
          Myfile.close();
     }
 }

ShrubberyCreationForm::~ShrubberyCreationForm()
{
     std::cout << "ShrubberyCreationForm decostructor called\n";
}