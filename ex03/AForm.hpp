#ifndef AFORM_HPP
# define AFORM_HPP

#include <stdexcept>
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _is_signed;
        const int _sign_grade;
        const int _execute_grade;
        AForm();

    public:
        AForm(std::string name, int sign_grade, int execute_grade);
        AForm(const AForm &copy);
        AForm& operator= (const AForm &copy);
        virtual ~AForm();

        std::string getName(void) const;
        bool getSignedStatus(void) const;
        int getSignGradeRequired(void) const;
        int getExecuteGradeRequired(void) const;

        virtual void beSigned(const Bureaucrat& Bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;

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

        class GradeTooLowToExecuteException : public virtual std::exception
        {
            public :
                virtual const char* what() const throw();
        };

        class NotSignedForm : public virtual std::exception
        {
            public :
                virtual const char* what() const throw();
        };

        class FailureCreateFile : public virtual std::exception
        {
            public :
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const AForm& AForm);

#endif
