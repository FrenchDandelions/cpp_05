#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <stdexcept>
#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        void setGrade(int grade);

    public:
        Bureaucrat();
        Bureaucrat(int grade);
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat& operator=(const Bureaucrat &copy);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        void IncrementGrade(int rank);
        void DecrementGrade(int rank);

        void signForm(AForm& Form);
        void executeForm(AForm const & form);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);

#endif