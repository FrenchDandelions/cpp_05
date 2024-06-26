#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public virtual AForm
{
    private:
        PresidentialPardonForm();
        std::string _target;

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
        std::string getTarget(void) const;
};

#endif
