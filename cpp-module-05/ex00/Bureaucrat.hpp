

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
    std::string _name;
    int _grade;

public:
    std::string getName();
    int getGrade();

    Bureaucrat();
    Bureaucrat(std::string name);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &op);
    void incrementGrade(int quantity);
    void decrementGrade(int quantity);

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };
};
std::ostream &operator<<(std::ostream &ostr, Bureaucrat &instance);

#endif