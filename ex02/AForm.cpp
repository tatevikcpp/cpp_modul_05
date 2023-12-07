#include "AForm.hpp"

AForm::AForm() :  _name("name"), _gradeSign(1), _gradeExecute(1), _signed(0)
{

}

AForm::~AForm()
{

}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : _name(name),  _gradeSign(gradeSign), _gradeExecute(gradeExecute), _signed(0)// 
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& obj) :_name(obj._name), _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute)
{
    this->_signed = obj._signed;
}

AForm& AForm::operator=(const AForm& obj)
{
    if (this != &obj)
    {
        this->_signed = obj._signed;
    }
    return (*this);
}


void AForm::beSigned(const Bureaucrat& obj)
{
    // std::cout << "this->_signed = " << this->_signed << "\n";
    if (this->_signed)
        throw AForm::GradeError();
    // std::cout << "obj.getGrade() " << obj.getGrade() << "\n";
    // std::cout << "this->_gradeSign " << this->_gradeSign << "\n";

    if (obj.getGrade() <= this->_gradeSign)
    {
        this->_signed = 1;
    }
    else
    {
        std::cout << "is not signed" << std::endl;
        // throw AForm::GradeTooLowException();
    }
}

std::string AForm::get_name() const
{
    return (this->_name);
}

int AForm::get_gradeSign() const
{
    return (this->_gradeSign);
}
int AForm::get_gradeExecute() const
{
    return (this->_gradeExecute);
}

bool AForm::get_signed() const
{
    return (this->_signed);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade Too High Exception for AForm");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low Exception for AForm");
}

const char* AForm::GradeError::what() const throw()
{
    return ("The form is already signed");
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
    os << obj.get_name();
    obj.get_signed() == false ? std::cout << ", is not signed." :
		std::cout << ", is signed.";
    os << " It is required " 
        << obj.get_gradeSign() <<" grade to sign and "
        <<  obj.get_gradeExecute() << " grade to execute"; 
       
    return (os);
}

void AForm::execute(Bureaucrat const & executor) const
{
    // std::cout << "signed form = " << this->_signed << "\n";
    // if (!this->_signed)
    if (this->_signed)
        throw AForm::GradeError();
    // std::cout << "executor.getGrade() = " << executor.getGrade() << "\n";
    // std::cout << "this->_gradeExecute = " << this->_gradeExecute << "\n";

    if (executor.getGrade() <= this->_gradeExecute)
    {
        this->action();
    }
    else
        throw AForm::GradeTooLowException();
}