#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj(20, "bob");
        obj.increment();
        obj.increment();
        obj.increment();
        obj.increment();
        obj.decrement();

        std::cout << obj;
        // std::cout << obj.getGrade();

        // Bureaucrat jon = obj;
        Bureaucrat jon;
        jon = obj;
        std::cout << "jon darcav: " << jon << std::endl;
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