#include "Form.hpp"

Form::Form() :  _name("name"), _gradeSign(1), _gradeExecute(1), _signed(0)
{

}

Form::~Form()
{

}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _signed(0)
{
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& obj) : _name(obj._name), _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute)
{
    this->_signed = obj._signed;
}

Form& Form::operator=(const Form& obj)
{
    if (this != &obj)
    {
        this->_signed = obj._signed;
    }
    return (*this);
}


void Form::beSigned(const Bureaucrat& obj)
{
    if (this->_signed)
        throw Form::GradeError();
    if (obj.getGrade() <= this->_gradeSign)
        this->_signed = 1;
    else
        throw Form::GradeTooLowException();
}

std::string Form::get_name() const
{
    return (this->_name);
}

int Form::get_gradeSign() const
{
    return (this->_gradeSign);
}
int Form::get_gradeExecute() const
{
    return (this->_gradeExecute);
}

bool Form::get_signed() const
{
    return (this->_signed);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High Exception for Form");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low Exception for Form");
}

const char* Form::GradeError::what() const throw()
{
    return ("The form is already signed");
}

const char* Form::SignedError::what() const throw()
{
    return ("The form is not signed");
}
std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    os << obj.get_name();
    obj.get_signed() == false ? std::cout << ", is not signed." :
		std::cout << ", is signed.";
    os << " It is required " 
        << obj.get_gradeSign() <<" grade to sign and "
        <<  obj.get_gradeExecute() << " grade to execute"; 
       
    return (os);
}