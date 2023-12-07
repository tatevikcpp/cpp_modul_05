#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b(10, "bob");
        Form obj("form", 20, 50); // TO DO ashxatacnel
        obj.beSigned(b);

        std::cout << obj << std::endl;
        std::cout << obj.get_gradeSign() << std::endl;
    }
    catch(std::exception& ex)
    {
        std::cout << ex.what();
    }
}
