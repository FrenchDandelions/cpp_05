#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getName(), copy.getSignGradeRequired(), copy.getExecuteGradeRequired())
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    std::cout << "PresidentialPardonForm copy operator called" << std::endl;
    if(this != &copy)
    {
        this->_target = copy._target;
        this->AForm::operator=(copy);
    }
    return(*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return(this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(this->getSignedStatus() == 0)
        throw NotSignedForm();
    if(this->getExecuteGradeRequired() < executor.getGrade())
        throw GradeTooLowToExecuteException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
