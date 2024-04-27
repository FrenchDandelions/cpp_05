#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getSignGradeRequired(), copy.getExecuteGradeRequired())
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    std::cout << "RobotomyRequestForm copy operator called" << std::endl;
    if(this != &copy)
    {
        this->_target = copy._target;
        this->AForm::operator=(copy);
    }
    return(*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return(this->_target);
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(this->getSignedStatus() == 0)
        throw NotSignedForm();
    if(this->getExecuteGradeRequired() < executor.getGrade())
        throw GradeTooLowToExecuteException();
    
    static bool initialized = false;
    if (!initialized) {
        std::srand(std::time(NULL));
        initialized = true;
    }
    int i = std::rand() % 2;
    if(i == 0)
        std::cout << "*BZZZ BEEP BEEP BZZZ DRILL* Success [" << this->_target << "] has been robotomized successfully!" << std::endl;
    else
        std::cout << "*CLANG* Failure, [" << this->_target << "] robotomy's failed!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

