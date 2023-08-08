


#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form
{
private:
    const std::string _name_form;
    bool signature;
    const int _grade_form;
    const int _grade_form_execute;


public:
    
    const std::string getName(void);
    const int getGradeSign(void);
    const int getGradeExec(void);
    int  getSigner();
    Form();
    Form(std::string name , const int grade_form, const int grade_form_execute); 
    Form(const int grade_form, const int grade_form_execute); 
    Form(std::string name); 
    // Form(const Form &cp);
    Form &operator=(const Form  &copy);
    virtual ~Form();

    class GradeTooHighException: public std::exception
    {
        public:
            const char *what() const throw();
    };
     class GradeTooLowException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    class NotSignerCausingByGrade: public std::exception
    {
        public:
            const char *what() const throw();
    };

    void beSigned(Bureaucrat &signer);

    //pure virtual 
    virtual void execute(Bureaucrat const & executor) = 0;
   
};

std::ostream &operator<<(std::ostream &ostr, Form &instance);

 


#endif