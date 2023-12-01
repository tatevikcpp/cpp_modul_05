#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b(-10, "bob");
        Form obj("form", 120); // TO DO ashxatacnel
        obj.beSigned(b);

        std::cout << obj << std::endl;
        // std::cout << obj.getGrade();
    }

    // catch(const Form::GradeTooHighException& ex)
    // {
    //    std::cout << ex.what();
    // }

    // catch(const Form::GradeTooLowException& ex)
    // {
    //    std::cout << ex.what();
    // }

    catch(std::exception& ex)
    {
        std::cout << ex.what();
    }
}