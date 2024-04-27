#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    private:
        AForm* createShrub(std::string target);
        AForm* createRobot(std::string target);
        AForm* createPres(std::string target);
        AForm* wrongForm(std::string target);

    public:
        Intern();
        Intern(const Intern& copy);
        Intern& operator= (const Intern& copy);
        ~Intern();

        AForm* makeForm(std::string request, std::string target);

        class UnknownForm : public virtual std::exception
        {
            public:
        };
};

#endif
