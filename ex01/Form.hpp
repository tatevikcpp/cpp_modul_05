#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(const Form& obj);
        Form(std::string name, int gradeSign, int gradeExecute);
        ~Form();
        Form& operator=(const Form& obj);

        void beSigned(const Bureaucrat& obj);
        std::string get_name() const;
        int get_gradeSign() const;
        int get_gradeExecute() const;
        bool get_signed() const;
        class GradeTooLowException : public std::exception
        {
            // GradeTooLowException() { std::cout << __PRETTY_FUNCTION__ << std::endl;}
            public:
                const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            // GradeTooHighException() { std::cout << __PRETTY_FUNCTION__ << std::endl;}
            public:
                const char* what() const throw();
        };

        class GradeError : public std::exception
        {
            // GradeTooLowException() { std::cout << __PRETTY_FUNCTION__ << std::endl;}
            public:
                const char* what() const throw();
        };

    private:
        const std::string _name;
        const int  _gradeSign;
        const int _gradeExecute;
        bool _signed;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
