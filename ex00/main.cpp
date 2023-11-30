#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj(149, "bob");
        // obj.increment();
        // obj.increment();
        // obj.increment();
        // obj.increment();
        obj.decrement();
        obj.decrement();


        std::cout << obj;
        std::cout << obj.getGrade();

        // Bureaucrat jon = obj;
    //     Bureaucrat jon;
    //     jon = obj;
    //     std::cout << "jon darcav: " << jon << std::endl;
    }

    catch(const Bureaucrat::GradeTooHighException& ex)
    {
       std::cout << ex.what();
    }

    // catch(std::exca)
    catch(const Bureaucrat::GradeTooLowException& ex)
    {
       std::cout << ex.what();
    }
}