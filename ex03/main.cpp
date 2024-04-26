#include "Colors.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 1:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "NEW BUREAUCRATE:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat celine("Celine", 18);
        std::cout << std::endl << GREEN "INCREMENTING GRADE TEST:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << celine << std::endl;
        for(int i = 0; i < 19; i++)
        {
            celine.IncrementGrade(1);
            std::cout << celine << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 2:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "NEW BUREAUCRATE:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat celine("Celine", 142);
        std::cout << std::endl << GREEN "DECREMENTING GRADE TEST:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << celine << std::endl;
        for(int i = 0; i < 19; i++)
        {
            celine.DecrementGrade(1);
            std::cout << celine << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 3:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "NEW BUREAUCRATE:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat celine("Celine", 160);
        std::cout << std::endl << GREEN "INCREMENTING GRADE TEST:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << celine << std::endl;
        for(int i = 0; i < 19; i++)
        {
            celine.DecrementGrade(1);
            std::cout << celine << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
		std::cout <<"BASIC TEST 4:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "NEW BUREAUCRATE:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Bureaucrat celine("Celine", 0);
        std::cout << std::endl << GREEN "INCREMENTING GRADE TEST:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << celine << std::endl;
        for(int i = 0; i < 19; i++)
        {
            celine.DecrementGrade(1);
            std::cout << celine << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl << std::endl;
    }
}
