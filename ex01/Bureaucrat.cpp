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
    try
    {
        if (this->_grade < 150)
            this->_grade++;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrement()
{
    try
    {
        if (this->_grade > 1)
            this->_grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
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