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
    }
    catch(const std::exception& ex)
    {
       std::cout << ex.what();
    }
}