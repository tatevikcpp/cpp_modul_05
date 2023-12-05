#pragma once
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& obj);
        ~Intern();
        Intern& operator=(const Intern& obj);

        AForm* makeForm(const std::string& name, const std::string& target);
        AForm* makeShrubbery(const std::string &target);
        AForm* makeRobotomy(const std::string &target);
        AForm* makePresidential(const std::string &target);
};
