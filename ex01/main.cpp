#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form obj(920);
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
       std::cout << ex.what();
    }

    catch(const Bureaucrat::GradeTooLowException& ex)
    {
       std::cout << ex.what();
    }
}