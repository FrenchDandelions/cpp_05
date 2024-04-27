#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Form"), _is_signed(0), _sign_grade(90), _execute_grade(45)
{
    std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string name, int sign_grade, int execute_grade) : _name(name), _is_signed(0), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
    std::cout << "Form constructor called" << std::endl;
    if(this->getSignGradeRequired() < 1)
        throw Form::GradeTooHighException();
    if(this->getSignGradeRequired() > 150)
        throw Form::GradeTooLowException();
    if(this->getExecuteGradeRequired() < 1 )
        throw Form::GradeTooHighException();
    if(this->getExecuteGradeRequired() > 150 )
        throw Form::GradeTooLowException();
    if(this->_sign_grade < this->_execute_grade)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _is_signed(0), _sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade)
{
    std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator= (const Form &copy)
{
    std::cout << "Form Copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        (const_cast<std::string&>(this->_name)) = copy._name;
        this->_is_signed = copy._is_signed;
        (const_cast<int &>(this->_sign_grade)) = copy._sign_grade;
        (const_cast<int &>(this->_execute_grade)) = copy._execute_grade;
    }
    return(*this);
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName(void) const
{
    return(this->_name);
}

bool Form::getSignedStatus(void) const
{
    return(this->_is_signed);
}

int Form::getSignGradeRequired(void) const
{
    return(this->_sign_grade);
}

int Form::getExecuteGradeRequired(void) const
{
    return(this->_execute_grade);
}

void Form::beSigned(const Bureaucrat& Bureaucrat)
{
    if(this->_sign_grade < Bureaucrat.getGrade())
        throw Form::GradeTooLowToSignException();
    if(this->_is_signed)
        std::cout << this->_name << " is already signed" << std::endl;
    else
    {
        this->_is_signed = 1;
        std::cout << this->_name << " has been signed" << std::endl;
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return("The form grade assigned is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("The form grade assigned is too low");
}

const char* Form::GradeTooLowToSignException::what() const throw()
{
    return("The bureaucrat's grade is too low to sign");
}

std::ostream& operator<<(std::ostream& out, const Form& Form)
{
    out << Form.getName() << (Form.getSignedStatus() != 0 ? " is signed and requires a grade " : " is not signed and requires a grade ") << Form.getSignGradeRequired() << " to be signed and a grade " << Form.getExecuteGradeRequired() << " to be executed";
    return(out);
}
