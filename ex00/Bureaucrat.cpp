#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("name"), _grade(1)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj._name)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    // this->_name = obj._name;
    this->_grade = obj._grade;
}

Bureaucrat::Bureaucrat(int grade, const std::string& name) : _name(name)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (grade < 1)
    {
        throw GradeTooHighException(); //nested class
    }
    else if (grade > 150)
        throw GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this != &obj)
    {
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
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrement()
{
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High Exception");
}


const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low Exception");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    // <name>, bureaucrat grade <grade>
    return (os << obj.getName() << ", bureaucrat grade " << obj.getGrade());
}
