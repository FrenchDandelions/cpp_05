#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("AForm"), _is_signed(0), _sign_grade(90), _execute_grade(45)
{
    std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(std::string name, int sign_grade, int execute_grade) : _name(name), _is_signed(0), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
    std::cout << "AForm constructor called" << std::endl;
    if(this->getSignGradeRequired() < 1)
        throw AForm::GradeTooHighException();
    if(this->getSignGradeRequired() > 150)
        throw AForm::GradeTooLowException();
    if(this->getExecuteGradeRequired() < 1 )
        throw AForm::GradeTooHighException();
    if(this->getExecuteGradeRequired() > 150 )
        throw AForm::GradeTooLowException();
    if(this->_sign_grade < this->_execute_grade)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _is_signed(0), _sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade)
{
    std::cout << "AForm Copy constructor called" << std::endl;
}

AForm& AForm::operator= (const AForm &copy)
{
    std::cout << "AForm Copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        (const_cast<std::string&>(this->_name)) = copy._name;
        this->_is_signed = copy._is_signed;
        (const_cast<int &>(this->_sign_grade)) = copy._sign_grade;
        (const_cast<int &>(this->_execute_grade)) = copy._execute_grade;
    }
    return(*this);
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getName(void) const
{
    return(this->_name);
}

bool AForm::getSignedStatus(void) const
{
    return(this->_is_signed);
}

int AForm::getSignGradeRequired(void) const
{
    return(this->_sign_grade);
}

int AForm::getExecuteGradeRequired(void) const
{
    return(this->_execute_grade);
}

void AForm::beSigned(const Bureaucrat& Bureaucrat)
{
    if(this->_sign_grade < Bureaucrat.getGrade())
        throw AForm::GradeTooLowToSignException();
    if(this->_is_signed)
        std::cout << this->_name << " is already signed" << std::endl;
    else
    {
        this->_is_signed = 1;
        std::cout << this->_name << " has been signed" << std::endl;
    }
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return("The Aform grade assigned is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return("The Aform grade assigned is too low");
}

const char* AForm::GradeTooLowToSignException::what() const throw()
{
    return("The bureaucrat's grade is too low to sign");
}

const char* AForm::GradeTooLowToExecuteException::what() const throw()
{
    return("The bureaucrat's grade is too low to execute");
}

const char* AForm::NotSignedForm::what() const throw()
{
    return("The form isn't signed");
}

const char* AForm::FailureCreateFile::what() const throw()
{
    return("There was an issue while creating the shrubbery file");
}

std::ostream& operator<<(std::ostream& out, const AForm& AForm)
{
    out << AForm.getName() << (AForm.getSignedStatus() != 0 ? " is signed and requires a grade " : " is not signed and requires a grade ") << AForm.getSignGradeRequired() << " to be signed and a grade " << AForm.getExecuteGradeRequired() << " to be executed";
    return(out);
}
