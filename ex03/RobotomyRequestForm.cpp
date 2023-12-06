#include "RobotomyRequestForm.hpp"
#include <cstdlib>
// RobotomyRequestForm()
RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy", 72, 45)
{
    this->_target = target;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
    this->_target = obj._target;
};

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return (*this);
};

void RobotomyRequestForm::action() const
{
    int n = rand() % 2;
    std::cout << "rand = " << n << "\n";
    switch (n)
    {
        case 0:
            std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
            break;
        default:
            std::cout << this->_target << "'s robotomy failed" << std::endl;
    }
};