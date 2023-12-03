#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm()
RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy", 72, 45)
{
    this->_target = target;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{

};

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    return (*this);
};

void RobotomyRequestForm::action() const
{

};