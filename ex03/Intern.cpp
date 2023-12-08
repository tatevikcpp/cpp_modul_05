#include "Intern.hpp"

Intern::Intern() 
{
};

Intern::Intern(const Intern &obj) 
{
    (void)obj;
};

Intern::~Intern() 
{
};

Intern &Intern::operator=(const Intern &obj) 
{
    (void)obj;
    return (*this);
};


AForm* Intern::makeShrubbery(const std::string &target)
{
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomy(const std::string &target)
{
    return (new RobotomyRequestForm(target));
}

AForm* Intern::makePresidential(const std::string &target)
{
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(const std::string& name, const std::string& target)
{
    // int a =5;
    // int *ptr = &a;
    // *ptr = 4;
    std::string internMake[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern::*fun_ptr[3])(const std::string &) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};

    for(int i = 0; i < 3; ++i)
    {
        if (name == internMake[i])
        {
            std::cout << "Intern creates " << name << "\n";
            return((this->*fun_ptr[i])(target));
        }
    }
    std::cout << "Intern can not create " << name << "\n";
    return(NULL);
}
