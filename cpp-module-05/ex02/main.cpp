

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// case when sign it and execute
	{
		Bureaucrat A("ahmed", 100);
		ShrubberyCreationForm S("shrubbery");
		try
		{
			S.beSigned(A);
			S.execute(A);
		}
		catch (std::exception &s)
		{
			std::cout << s.what();
		}
	}
	std::cout << "\n||||||||||||||||||||||||||||||\n\n";
	// case when not sign and cant execute
	{
		Bureaucrat A("ahmed", 146);
		ShrubberyCreationForm S("shrubbery");
		try
		{
			S.beSigned(A);
			S.execute(A);
		}
		catch (std::exception &s)
		{
			std::cout << s.what();
		}
	}
	std::cout << "\n||||||||||||||||||||||||||||||\n\n";

	//****** RobotomyFrom  ******
	{ 
		Bureaucrat A("ahmed", 60);
		Bureaucrat B("ahmed", 20);
		RobotomyRequestForm R("robot");
		try{
			R.beSigned(A);
			R.execute(B);
		}	catch (std::exception &s)
		{
			std::cout << s.what();
		}
	}
	std::cout << "\n||||||||||||||||||||||||||||||\n\n";

	{ 
		Bureaucrat A("ahmed", 60);
		Bureaucrat B("ahmed", 90);
		RobotomyRequestForm R("robot");
		try{
			R.beSigned(A);
			R.execute(B);
		}	catch (std::exception &s)
		{
			std::cout << s.what();
		}
	}

	std::cout << "\n||||||||||||||||||||||||||||||\n\n";

	//****** PresidentialPardonForm  ******
	{ 
		Bureaucrat A("ahmed", 60);
		Bureaucrat B("ahmed", 20);
		PresidentialPardonForm R("robot");
		try{
			R.beSigned(A);
			R.execute(B);
		}	catch (std::exception &s)
		{
			std::cout << s.what();
		}
	}

	std::cout << "\n||||||||||||||||||||||||||||||\n\n";
	{ 
		Bureaucrat A("ahmed", 10);
		Bureaucrat B("ahmed", 5);
		PresidentialPardonForm R("robot");
		try{
			R.beSigned(A);
			R.execute(B);
			A.executeForm(R);
		}	catch (std::exception &s)
		{
			std::cout << s.what();
		}
	}
}
