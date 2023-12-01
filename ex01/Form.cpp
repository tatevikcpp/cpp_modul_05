#include "Form.hpp"

Form::Form(/* args */) : _signed(0), _name("name"), _gradeSign(1), _gradeExecute(1)
{

}

Form::~Form()
{

}

Form::Form(std::string name, int gradeSign) : _name(name), _signed(0), _gradeSign(gradeSign), _gradeExecute(1) // 
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (_gradeSign < 1)
        throw GradeTooHighException(); //nested class
    else if (_gradeSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& obj) : _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute), 
_name(obj._name)
{
    // this->_name = obj._name;
    // this->_gradeSign = obj._gradeSign;
    // this->_gradeExecute = obj._gradeExecute;
    this->_signed = obj._signed;
}

Form& Form::operator=(const Form& obj) //TO DO kisat 
{
    if (this != &obj)
    {
        // this->_name = obj._name;
        // this->_gradeSign = obj._gradeSign;
        // this->_gradeExecute = obj._gradeExecute;
        this->_signed = obj._signed;
    }
    return (*this);
}


void Form::beSigned(const Bureaucrat& obj)
{
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

// int Form::get_gradeSign() const
// {
//     return (this->_gradeSign);
// }

bool Form::get_signed() const
{
    return (this->_signed);
}

// void Form::increment()
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     if (this->_gradeSign == 1)
//         throw Form::GradeTooHighException();
//     this->_grade--;
// }

// void Form::decrement()
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     if (this->_gradeSign == 150)
//         throw Form::GradeTooLowException();
//     this->_grade++;
// }

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High Exception for Form");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low Exception for Form");
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    return (os << "name = " << obj.get_name()); //TO DO esim ? 
}