#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj(920);
        obj.increment();
        obj.increment();
        obj.increment();
        obj.increment();
        obj.decrement();

        std::cout << obj;
        // std::cout << obj.getGrade();
    }

    catch(const Bureaucrat::GradeTooHighException& ex)
    {
       ex.what();
    }

    catch(const Bureaucrat::GradeTooLowException& ex)
    {
       ex.what();
    }
}