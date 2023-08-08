

#include "Bureaucrat.hpp"

int main()
{

	{ // create bureaucrat default
		Bureaucrat Jeo;
		try
		{
			std::cout << Jeo << std::endl;
			Jeo.decrementGrade(1);
			std::cout << Jeo << std::endl;
			Jeo.incrementGrade(1);
			std::cout << Jeo << std::endl;
			Jeo.incrementGrade(1);
			std::cout << Jeo << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}
	std::cout << "\n ------------- \n";

	{
		Bureaucrat Teo("Teo");
		try
		{
			std::cout << Teo << std::endl;
			Teo.decrementGrade(1);
			std::cout << Teo << std::endl;
			Teo.incrementGrade(1);
			std::cout << Teo << std::endl;
			Teo.incrementGrade(1);
			std::cout << Teo << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}
	std::cout << "\n ------------- \n";

	{
		Bureaucrat Teo("Teo", 1);
		try
		{
			std::cout << Teo << std::endl;
			Teo.decrementGrade(1);
			std::cout << Teo << std::endl;
			Teo.incrementGrade(1);
			std::cout << Teo << std::endl;
			Teo.incrementGrade(1);
			std::cout << Teo << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}
}
