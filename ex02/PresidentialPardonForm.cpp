#include "PresidentialPardonForm.hpp"


// PresidentialPardonForm();
PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("Presidential", 25, 5)
{
    this->_target = target;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm("Presidential", 25, 5)
{
    this->_target = obj._target;
};

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return (*this);
};

void PresidentialPardonForm::action() const
{
    std::cout << this->_target << "  has been pardoned by Zaphod Beeblebrox" << std:: endl;
}