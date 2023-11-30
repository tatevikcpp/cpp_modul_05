#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_name = obj._name;
    this->_grade = obj._grade;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (grade < 1)
    {
        std::cout << "lalala\n";
        throw GradeTooHighException(); //nested class
    }
    else if (grade > 150)
        throw GradeTooLowException();
    else
    {
        this->_grade = grade;
        this->_name = name;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
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
    std::cout << "LALALA\n";
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