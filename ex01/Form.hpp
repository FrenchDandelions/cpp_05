#ifndef FORM_HPP
# define FORM_HPP

#include <stdexcept>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _is_signed;
        const int _sign_grade;
        const int _execute_grade;

    public:
        Form();
        Form(std::string name, int sign_grade, int execute_grade);
        Form(const Form &copy);
        Form& operator= (const Form &copy);
        ~Form();

        std::string getName(void) const;
        bool getSignedStatus(void) const;
        int getSignGradeRequired(void) const;
        int getExecuteGradeRequired(void) const;

        void beSigned(const Bureaucrat& Bureaucrat);

        class GradeTooHighException : public virtual std::exception
        {
            public :
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public virtual std::exception
        {
            public :
                virtual const char* what() const throw();
        };

        class GradeTooLowToSignException : public virtual std::exception
        {
            public :
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const Form& Form);

#endif
