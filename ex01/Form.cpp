#include "Form.hpp"

Form::Form(/* args */)
{
}

Form::~Form()
{
}

Form::Form(const Form& obj)
{

}

Form& Form::operator=(const Form& obj)
{

}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    return (os << "name = " << obj._name); //TO DO esim ?
}