#include "PresidentialPardonForm.hpp"

// PresidentialPardonForm();
PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("Presidential", 25, 5)
{
    this->_target = target;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
{

};

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    return (*this);
};

void PresidentialPardonForm::action() const
{

}