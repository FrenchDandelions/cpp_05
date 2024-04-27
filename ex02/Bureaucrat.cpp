#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Cindy")
{
    std::cout << "Basic Bureaucrat constructor called" << std::endl;
    this->setGrade(140);
}

Bureaucrat::Bureaucrat(int grade) : _name("Cindy")
{
    std::cout << "Bureaucrat grade only constructor called" << std::endl;
    this->setGrade(grade);
}

Bureaucrat::Bureaucrat(std::string name ,int grade) : _name(name)
{
    std::cout << "Bureaucrat name and grade constructor called" << std::endl;
    this->setGrade(grade);
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
    std::cout << "Bureaucrat name only constructor called" << std::endl;
    this->setGrade(140);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        (const_cast<std::string &>(this->_name)) = copy._name;
        this->setGrade(copy._grade);
    }
    return(*this);
}

void Bureaucrat::setGrade(int grade)
{
    if(grade < 1 || grade > 150)
    {
        if(grade < 1)
            throw Bureaucrat::GradeTooHighException();
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
}

std::string Bureaucrat::getName() const
{
    return(this->_name);
}

int Bureaucrat::getGrade() const
{
    return(this->_grade);
}

void Bureaucrat::signForm(AForm& Form)
{
    if(this->_grade <= Form.getSignGradeRequired() && Form.getSignedStatus() == 0)
    {
        Form.beSigned(*this);
        std::cout << this->_name << " signed " << Form.getName() << std::endl;
    }
    else if(this->_grade <= Form.getSignGradeRequired() && Form.getSignedStatus() == 1)
    {
        std::cout << this->_name << " couldn't sign " << Form.getName() << " because it was already signed" << std::endl;
    }
    else
    {
        std::cout << this->_name << " couldn't sign " << Form.getName() << " because their grade was too low" << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    if(this->_grade <= form.getExecuteGradeRequired() && form.getSignedStatus() == 1)
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    else if(this->_grade <= form.getExecuteGradeRequired() && form.getSignedStatus() == 0)
    {
        std::cout << this->_name << " couldn't execute " << form.getName() << " because the form wasn't signed" << std::endl;
    }
    else
    {
        std::cout << this->_name << " couldn't execute " << form.getName() << " because their grade was too low" << std::endl;
    }
}

void Bureaucrat::IncrementGrade(int rank)
{
    if(this->_grade - rank < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Bureaucrat " << this->_name << " that used to be grade " << this->_grade << " is now promoted to grade " << this->_grade - rank << " ! Congratulation ! :D " << std::endl;
    this->setGrade(this->_grade - rank);
}

void Bureaucrat::DecrementGrade(int rank)
{
    if(this->_grade + rank > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat " << this->_name << " that used to be grade " << this->_grade << " is now demoted to grade " << this->_grade + rank << " ! :( " << std::endl;
    this->setGrade(this->_grade + rank);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("The Grade that you're trying to assign is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("The Grade that you're trying to assign is too low");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
    out << Bureaucrat.getName() << " is a bureaucrat of grade " << Bureaucrat.getGrade();
    return (out);
}
