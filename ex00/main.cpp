#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj(150, "bob");
        std::cout << obj << std::endl;
        obj.increment();
        obj.increment();
        // obj.decrement();
        // obj.decrement();
        std::cout << obj.getGrade() << std::endl;



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