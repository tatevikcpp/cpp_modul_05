#pragma onse
#include <iostream>

class Form
{
    public:
        Form(/* args */);
        Form(const Form& obj);
        ~Form();
        Form& operator=(const Form& obj);

    private:
        const std::string _name;
        const int  _gradeSign;
        const int _ gradeRequired;
        bool _signed;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
