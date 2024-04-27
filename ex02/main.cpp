#include "Colors.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 1:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat marisol("Marisol", 1);
        AForm *shrub = new ShrubberyCreationForm(marisol.getName());
        AForm *pres = new PresidentialPardonForm(marisol.getName());
        AForm *robot = new RobotomyRequestForm(marisol.getName());
        std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "SIGNING AND EXECUTING FORMS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        marisol.signForm(*shrub);
        marisol.executeForm(*shrub);
        marisol.signForm(*pres);
        marisol.executeForm(*pres);
        marisol.signForm(*robot);
        marisol.executeForm(*robot);
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        delete shrub;
        delete pres;
        delete robot;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 2:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        for(int i = 0; i < 5; i++)
        {
            std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	        std::cout << "---------------------------------------------------" RESET << std::endl;
            Bureaucrat buck("Buck", 1);
            AForm *robot = new RobotomyRequestForm(buck.getName());
            std::cout << std::endl << GREEN "SIGNING AND EXECUTING:" << std::endl;
	        std::cout << "---------------------------------------------------" RESET << std::endl;
            buck.signForm(*robot);
            buck.executeForm(*robot);
            std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	        std::cout << "---------------------------------------------------" RESET << std::endl;
            delete robot;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 3:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat marisol("Marisol3", 24);
        AForm *shrub = new ShrubberyCreationForm(marisol.getName());
        AForm *pres = new PresidentialPardonForm(marisol.getName());
        AForm *robot = new RobotomyRequestForm(marisol.getName());
        std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "SIGNING AND EXECUTING FORMS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        marisol.signForm(*shrub);
        marisol.executeForm(*shrub);
        marisol.signForm(*pres);
        marisol.executeForm(*pres);
        marisol.signForm(*robot);
        marisol.executeForm(*robot);
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        delete shrub;
        delete pres;
        delete robot;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 4:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat marisol("Marisol4", 137);
        AForm *shrub = new ShrubberyCreationForm(marisol.getName());
        AForm *pres = new PresidentialPardonForm(marisol.getName());
        AForm *robot = new RobotomyRequestForm(marisol.getName());
        std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "SIGNING AND EXECUTING FORMS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        marisol.signForm(*shrub);
        marisol.executeForm(*shrub);
        marisol.signForm(*pres);
        marisol.executeForm(*pres);
        marisol.signForm(*robot);
        marisol.executeForm(*robot);
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        delete shrub;
        delete pres;
        delete robot;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 5:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat marisol("Marisol5", 137);
        PresidentialPardonForm pres (marisol.getName());
        std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "SIGNING AND EXECUTING FORMS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        pres.beSigned(marisol);
        pres.execute(marisol);
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 6:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat marisol("Marisol6", 18);
        PresidentialPardonForm pres (marisol.getName());
        std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "SIGNING AND EXECUTING FORMS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        pres.beSigned(marisol);
        pres.execute(marisol);
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 7:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat marisol("Marisol7", 1);
        PresidentialPardonForm pres (marisol.getName());
        std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "SIGNING AND EXECUTING FORMS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        pres.execute(marisol);
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 8:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat marisol("Marisol8", 48);
        RobotomyRequestForm robot (marisol.getName());
        std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "SIGNING AND EXECUTING FORMS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        robot.beSigned(marisol);
        robot.execute(marisol);
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 8:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "CONSTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat mary("Mary", 1);
        RobotomyRequestForm robot (mary.getName());
        PresidentialPardonForm pres ("Mercy");
        ShrubberyCreationForm shrub ("Pythia");
        RobotomyRequestForm robot2("robot");
        PresidentialPardonForm pres2("pres");
        ShrubberyCreationForm shrub2("shrub");
        std::cout << YELLOW "Check status pres: " << pres << RESET << std::endl;
        std::cout << BLUE "Check status robot: " << robot << RESET << std::endl;
        std::cout << ORANGE "Check status shrub: " << shrub << RESET << std::endl;
        std::cout << YELLOW "Check status pres2: " << pres2 << RESET << std::endl;
        std::cout << BLUE "Check status robot2: " << robot2 << RESET << std::endl;
        std::cout << ORANGE "Check status shrub2: " << shrub2 << RESET << std::endl;
        mary.signForm(robot2);
        mary.signForm(pres2);
        mary.signForm(shrub2);
        mary.executeForm(robot2);
        mary.executeForm(pres2);
        mary.executeForm(shrub2);
        std::cout << YELLOW "Check status pres: " << pres << RESET << std::endl;
        std::cout << BLUE "Check status robot: " << robot << RESET << std::endl;
        std::cout << ORANGE "Check status shrub: " << shrub << RESET << std::endl;
        std::cout << YELLOW "Check status pres2: " << pres2 << RESET << std::endl;
        std::cout << BLUE "Check status robot2: " << robot2 << RESET << std::endl;
        std::cout << ORANGE "Check status shrub2: " << shrub2 << RESET << std::endl;
        robot2 = robot;
        pres2 = pres;
        shrub2 = shrub;
        std::cout << YELLOW "Check status pres: " << pres << RESET << std::endl;
        std::cout << BLUE "Check status robot: " << robot << RESET << std::endl;
        std::cout << ORANGE "Check status shrub: " << shrub << RESET << std::endl;
        std::cout << YELLOW "Check status pres2: " << pres2 << RESET << std::endl;
        std::cout << BLUE "Check status robot2: " << robot2 << RESET << std::endl;
        std::cout << ORANGE "Check status shrub2: " << shrub2 << RESET << std::endl;
        std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "SIGNING AND EXECUTING FORMS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        robot.beSigned(mary);
        robot.execute(mary);
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl;
    }
}
