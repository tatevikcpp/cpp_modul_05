#include "PresidentialPardonForm.hpp"


// PresidentialPardonForm();

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj)
{
    this->_target = "target";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("Presidential", 25, 5) //chi nkarum, 145-ic mec
{
    this->_target = target;
}
 
PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    AForm::operator=(obj);
    this->_target = obj._target;
    return (*this);
}

void PresidentialPardonForm::action() const
{
    std::cout << this->_target << "  has been pardoned by Zaphod Beeblebrox" << std:: endl;
}