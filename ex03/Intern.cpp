#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern& copy)
{
    (void)copy;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& copy)
{
    (void)copy;
    std::cout << "Intern copy operator called" << std::endl;
    return(*this);
}

AForm* Intern::createShrub(std::string target)
{
    return(new ShrubberyCreationForm(target));
}

AForm* Intern::createRobot(std::string target)
{
    return(new RobotomyRequestForm(target));
}

AForm* Intern::createPres(std::string target)
{
    return(new PresidentialPardonForm(target));
}

AForm* Intern::wrongForm(std::string target)
{
    (void)target;
    std::cout << "Error, unknow form requested." << std::endl
    << "Forms available are : shrubbery request, robotomy request and presidential request"
    << std::endl;
    return (NULL);
}


AForm* Intern::makeForm(std::string request, std::string target)
{
    std::string tab[4] = {"shrubbery request", "robotomy request", "presidential request", request};
    AForm* (Intern::*func[4])(std::string target) = {&Intern::createShrub, &Intern::createRobot, &Intern::createPres, &Intern::wrongForm};
    int i;
    for(i = 0; i < 4; i++)
    {
        if(tab[i] == request)
            break;
    }
    return((this->*func[i])(target));
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}
