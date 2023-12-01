#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    this->_name = obj._name;
    this->_grade = obj._grade;
}

Bureaucrat::Bureaucrat(int grade, const std::string& name)
{
    if (grade > 150)
    {
        std::cout << "lalala\n";
        throw GradeTooHighException(); //nested class
    }
    else if (grade < 1)
        throw GradeTooLowException();
    else
    {
        this->_grade = grade;
        this->_name = name;
    }
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this != &obj)
    {
        this->_name = obj._name;
        this->_grade = obj._grade;
    }
    return (*this);
}


std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::increment()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrement()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("error 150\n");
}


const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("error 1\n");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    return (os << "_grade = " << obj.getGrade() << "\n" << "_name = " << obj.getName() << "\n"); 
}

//  Form

void Bureaucrat::signForm(const Form& obj)
{
    if (obj.get_signed() == 1)
    {
        std::cout << this->_name << " signed " << obj.get_name() << "\n";
    }
    else
    {
        // <bureaucrat> couldn’t sign <form> because <reason>
        std::cout << this->_name << " couldn’t sign " << obj.get_name() << 
        " because " << obj.get_gradeSign() << "\n";
    }
}