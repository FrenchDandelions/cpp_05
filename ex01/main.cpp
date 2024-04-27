#include "Colors.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
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
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
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
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
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
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
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
		std::cout <<"BASIC TEST 5:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "NEW FORMS AND NEW BUREAUCRATE:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Form form("Form1", 18, 9);
        std::cout << form << std::endl;
        Bureaucrat celine("Celine", 10);
        std::cout << celine << std::endl;
        Bureaucrat monica("Monica", 19);
        std::cout << monica << std::endl;
        std::cout << std::endl << GREEN "SIGNING FORM TEST:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        celine.signForm(form);
        std::cout << form << std::endl;
        celine.signForm(form);
        std::cout << form << std::endl;
        monica.signForm(form);
        std::cout << form << std::endl;
        form.beSigned(monica);
        std::cout << form << std::endl;
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
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
		std::cout <<"BASIC TEST 6:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "FORM WITH GRADE TO SIGN TOO HIGH:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Form form("Form1", 12, 0);
        std::cout << form << std::endl;
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
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
		std::cout <<"BASIC TEST 7:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "FORM WITH GRADE TO EXECUTE TOO HIGH:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Form form("Form1", 0, 12);
        std::cout << form << std::endl;
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
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
		std::cout <<"BASIC TEST 7:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << std::endl << GREEN "COPIES:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Form form("Form1", 12, 1);
        std::cout << YELLOW "Status basic form: " RESET << form << std::endl;
        Form form2(form);
        std::cout << YELLOW "Status form2 form before: " RESET << form2 << std::endl;
        Form form3;
        std::cout << YELLOW "Status form3 default form before: " RESET << form3 << std::endl;
        form3 = form2;
        std::cout << YELLOW "Status form3 after form before: " RESET << form3 << std::endl;
        Bureaucrat billy("Billy", 1);
        std::cout << YELLOW "Status billy: " RESET << billy << std::endl;
        Bureaucrat basic;
        std::cout << YELLOW "Status basic before: " RESET <<  basic << std::endl;
        basic = billy;
        std::cout << YELLOW "Status basic after: " RESET <<  basic << std::endl;
        Bureaucrat basic2(billy);
        std::cout << YELLOW "Status basic2 : " RESET <<  basic << std::endl;
        billy.signForm(form);
        std::cout << YELLOW "Status basic form now: " RESET << form << std::endl;
        std::cout << YELLOW "Status form2 form now: " RESET << form2 << std::endl;
        std::cout << YELLOW "Status form3 form now: " RESET << form3 << std::endl;
        std::cout << std::endl << GREEN "DESTRUCTORS:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << PURP "EXCEPTION CAUGHT:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cerr << e.what() << std::endl << std::endl;
    }
}
