#pragma once
#include "Bureaucrat.hpp"

class Form
{
    public:
        Form(/* args */);
        Form(const Form& obj);
        Form(std::string name/* , int grade */); // TO DO  kisat
        ~Form();
        Form& operator=(const Form& obj);

        void beSigned(const Bureaucrat& obj);
        // void signForm() const;
        std::string get_name() const;
        int get_gradeSign() const;
        int get_gradeExecute() const;
        int get_grade() const;
        bool get_signed() const;
        void increment();
        void decrement();
        class GradeTooLowException : public std::exception
        {
            GradeTooLowException() { std::cout << __PRETTY_FUNCTION__ << std::endl;}
            const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            GradeTooHighException() { std::cout << __PRETTY_FUNCTION__ << std::endl;}
            const char* what() const throw();
        };

    private:
        // int _grade;
        const std::string _name;
        const int  _gradeSign;
        const int _gradeExecute;
        bool _signed;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
