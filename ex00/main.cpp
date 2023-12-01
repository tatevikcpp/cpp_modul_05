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
        std::cout << obj << "\n";
        std::cout << obj.getGrade();
        obj.decrement();
        obj.decrement();



        // Bureaucrat jon = obj;
    //     Bureaucrat jon;
    //     jon = obj;
    //     std::cout << "jon darcav: " << jon << std::endl;
    }
    catch(const std::exception& ex)
    {
       std::cout << ex.what();
    }
    // }
    // catch(const Bureaucrat::GradeTooHighException& ex)
    // {
    //    std::cout << ex.what();
    // }

    // catch(const Bureaucrat::GradeTooLowException& ex)
    // {
    //    std::cout << ex.what();
}