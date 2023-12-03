#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        // RobotomyRequestForm();
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        virtual void action() const;
    private:
        std::string _target;
};