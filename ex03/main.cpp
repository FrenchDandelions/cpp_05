#include "Colors.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

template <typename T> 
void myDelete(T **ptr)
{
    delete *ptr;
    *ptr = NULL;
}

int main()
{
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"BASIC TEST 1:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    Intern intern;
    AForm  *rrf;
    AForm *rrf1;
    AForm *rrf2;
    AForm *rrf3;
    Bureaucrat mary("Mary", 50);
    Bureaucrat jean("Jean", 6);
    Bureaucrat ron("Ron", 35);
    Bureaucrat pity("Pity", 16);
    std::cout << std::endl << GREEN "MAKING FORMS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    rrf = intern.makeForm("robotomy request", "Marisol");
    rrf1 = intern.makeForm("presidential request", "Buck");
    rrf2 = intern.makeForm("shrubbery request", "Eddie");
    rrf3 = intern.makeForm("apocalypse request", "Hen");
    try
    {
        if(rrf)
        {
            rrf->beSigned(jean);
            rrf->execute(jean);
        }
        if(rrf2)
        {
            rrf2->beSigned(pity);
            rrf2->execute(pity);
        }
        if(rrf1)
        {
            rrf1->beSigned(jean);
            rrf1->execute(jean);
        }
        if(rrf3)
        {
            rrf3->beSigned(mary);
            rrf3->execute(mary);
        }
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        myDelete(&rrf);
        myDelete(&rrf1);
        myDelete(&rrf2);
        myDelete(&rrf3);
        return(1);
    }
    std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    myDelete(&rrf);
    myDelete(&rrf1);
    myDelete(&rrf2);
    myDelete(&rrf3);
    
}
