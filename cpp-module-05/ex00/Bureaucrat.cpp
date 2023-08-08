
#include "Bureaucrat.hpp"

// default constructor
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    std::cout << "constructor called\n";
}

// default constructor  (name)
Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
    this->_grade = 150;
    std::cout << "constructor called\n";
}

// default constructor (name) (grade)
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "constructor called " << this->_name << " " << this->_grade << "\n";
}

// copy assignement operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &op)
{
    std::cout << "copy assignment operator\n";
    this->_grade = op._grade;
    return (*this);
}

// getName

std::string Bureaucrat::getName()
{
    return this->_name;
}

// get grade
int Bureaucrat::getGrade()
{
    return this->_grade;
}

// decrement Grade
void Bureaucrat::decrementGrade(int quantity)
{
    if (this->_grade + quantity > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade += quantity;
}

// increment Grade
void Bureaucrat::incrementGrade(int quantity)
{
    if (this->_grade - quantity < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade -= quantity;
}

// copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "copy constructor\n";
    *this = copy;
}

// deconstructor
Bureaucrat::~Bureaucrat()
{
    std::cout << "deconstructor called\n";
}

// GradeTooException
const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade too low\n");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade too high\n");
}

// overloaded
std::ostream &operator<<(std::ostream &ostr, Bureaucrat &instance)
{
    ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade() << std::endl;
    return ostr;
}