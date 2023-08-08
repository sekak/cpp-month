#include "Form.hpp"


//constructor called 
Form::Form(): _grade_form(150), _grade_form_execute(150) , _name_form("defualt")
{
    this->signature = false;
    std::cout << "constructor called (form): " << getName() << "\n";
    
    const int i = getGradeExec();
    const int j = getGradeSign();
    if(i > 150 || j> 150)
        throw Form::GradeTooLowException();
    else if(i < 1 || j< 1)
        throw Form::GradeTooLowException();
}


//constructor called 
Form::Form(const std::string name ,const int grade_form, const int grade_form_execute): _grade_form(grade_form), _grade_form_execute(grade_form_execute) , _name_form(name)
{
    this->signature = false;
    std::cout << "constructor called  (form): " << getName() << "\n";
    
    const int i = getGradeExec();
    const int j = getGradeSign();
    if(i > 150 || j> 150)
        throw Form::GradeTooLowException();
    else if(i < 1 || j< 1)
        throw Form::GradeTooLowException();
}

//constructor called 
Form::Form(const std::string name ): _grade_form(150), _grade_form_execute(150) , _name_form(name)
{
    this->signature = false;
    std::cout << "constructor called  (form): " << getName() << "\n";
    
    const int i = getGradeExec();
    const int j = getGradeSign();
    if(i > 150 || j> 150)
        throw Form::GradeTooLowException();
    else if(i < 1 || j< 1)
        throw Form::GradeTooLowException();
}

//constructor called 
Form::Form(const int grade_form, const int grade_form_execute):_name_form("default"), _grade_form(grade_form), _grade_form_execute(grade_form_execute)
{
    this->signature = false;
    std::cout << "constructor called  (form): " << getName() << "\n";
    
    const int i = getGradeExec();
    const int j = getGradeSign();
    if(i > 150 || j> 150)
        throw Form::GradeTooLowException();
    else if(i < 1 || j< 1)
        throw Form::GradeTooHighException();
}

//copy contructor form
// Form::Form(const Form &cp)
// {
//     std::cout << "copy constructor called\n";
//     *this = cp;
// }

//copy assignment operator
Form &Form::operator=(const Form &op)
{
    std::cout << "can't copy anything\n";
    return(*this);
}

//get name of Form
const std::string Form::getName()
{
    return this->_name_form;
}

// getGradeSigner
const int Form::getGradeSign()
{
    return this->_grade_form;
}

// getGradeExecute 
const int Form::getGradeExec()
{
    return this->_grade_form_execute;
}
 
// deconstructor called
Form::~Form()
{
    std::cout << "deconstrucor called (form).\n";
}

//GradeTooHighException
const char *Form::GradeTooHighException::what() const throw()
{   
    return("High Grade\n");
}

//NotSignerCausingByGrade
const char *Form::NotSignerCausingByGrade::what() const throw()
{   
    return("not being sign\n");
}

//GradeTooLowException
const char *Form::GradeTooLowException::what() const throw()
{   
    return("Low Grade\n");
}


// beSigned
void Form::beSigned(Bureaucrat &signer)
{
    if(getGradeSign() < signer.getGrade())
        throw Form::GradeTooLowException();
    else if(this->signature == false)
    {
        this->signature = true;
        std::cout << "Form was signed by " << signer.getName()<< std::endl;
    }
    else 
        std::cout << "Form is already signed\n";

        
}


// getSigner whether has false or true
int Form::getSigner()
{
    return this->signature;
}

// overLoaded 
std::ostream &operator<<(std::ostream &ostr, Form &instance)
{
    ostr << "form " << instance.getName();
    return ostr;
}