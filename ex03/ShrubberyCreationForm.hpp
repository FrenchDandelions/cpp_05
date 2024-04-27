#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public virtual AForm
{
    private:
        ShrubberyCreationForm();
        std::string _target;

    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
        std::string getTarget(void) const;
};

#endif
