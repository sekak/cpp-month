#include "Form.hpp"



Form::Form(): _grade_form(150), _grade_form_execute(150) , _name_form("defualt")
{
    this->signature = false;
    std::cout << "constructor called name(form): " << getName() << "\n";
    
    const int i = getGradeExec();
    const int j = getGradeSign();
    if(i > 150 || j> 150)
        throw Form::GradeTooLowException();
    else if(i < 1 || j< 1)
        throw Form::GradeTooLowException();
}



Form::Form(const std::string name ,const int grade_form, const int grade_form_execute): _grade_form(grade_form), _grade_form_execute(grade_form_execute) , _name_form(name)
{
    this->signature = false;
    std::cout << "constructor called name(form): " << getName() << "\n";
    
    const int i = getGradeExec();
    const int j = getGradeSign();
    if(i > 150 || j> 150)
        throw Form::GradeTooLowException();
    else if(i < 1 || j< 1)
        throw Form::GradeTooLowException();
}


Form::Form(const std::string name ): _grade_form(150), _grade_form_execute(150) , _name_form(name)
{
    this->signature = false;
    std::cout << "constructor called name(form): " << getName() << "\n";
    
    const int i = getGradeExec();
    const int j = getGradeSign();
    if(i > 150 || j> 150)
        throw Form::GradeTooLowException();
    else if(i < 1 || j< 1)
        throw Form::GradeTooLowException();
}

Form::Form(const int grade_form, const int grade_form_execute):_name_form("default"), _grade_form(grade_form), _grade_form_execute(grade_form_execute)
{
    this->signature = false;
    std::cout << "constructor called name(form): " << getName() << "\n";
    
    const int i = getGradeExec();
    const int j = getGradeSign();
    if(i > 150 || j> 150)
        throw Form::GradeTooLowException();
    else if(i < 1 || j< 1)
        throw Form::GradeTooHighException();
}


const std::string Form::getName()
{
    return this->_name_form;
}

const int Form::getGradeSign()
{
    return this->_grade_form;
}

const int Form::getGradeExec()
{
    return this->_grade_form_execute;
}
 

Form::~Form()
{
    std::cout << "deconstrucor called in form.\n";
}


const char *Form::GradeTooHighException::what() const throw()
{   
    return("High Grade\n");
}

const char *Form::GradeTooLowException::what() const throw()
{   
    return("Low Grade\n");
}



void Form::beSigned(Bureaucrat &signer)
{
    if(getGradeSign() < signer.getGrade())
        throw Form::GradeTooLowException();
    else if(this->signature == true)
    {
        std::cout << "Form was signed by " << signer.getName()<< std::endl;
    }
    else 
        std::cout << "Form is already signed\n";

        
}

int Form::getSigner()
{
    return this->signature;
}


std::ostream &operator<<(std::ostream &ostr, Form &instance)
{
    ostr << "form " << instance.getName();
    return ostr;
}