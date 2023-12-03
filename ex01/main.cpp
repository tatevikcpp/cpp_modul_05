#include "Bureaucrat.hpp"

// int main()
// {
//     try
//     {
//         Bureaucrat b(-10, "bob");
//         Form obj("form", 120); // TO DO ashxatacnel
//         obj.beSigned(b);

//         std::cout << obj << std::endl;
//         // std::cout << obj.getGrade();
//     }

//     // catch(const Form::GradeTooHighException& ex)
//     // {
//     //    std::cout << ex.what();
//     // }

//     // catch(const Form::GradeTooLowException& ex)
//     // {
//     //    std::cout << ex.what();
//     // }

//     catch(std::exception& ex)
//     {
//         std::cout << ex.what();
//     }
// }



int main() {
    try
    {
        Bureaucrat a(151, "bob");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat a(150, "bob");
        a.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    Form b("form", 1, 5);
    try
    {
        Bureaucrat a(5, "bob");
        Form form("Babken", 15, 20);
        std::cout << form << std::endl;
        a.signForm(form);
        std::cout << form << std::endl;
        a.signForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << b << std::endl;
}