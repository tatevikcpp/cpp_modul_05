#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm(/* args */);
        AForm(const AForm& obj);
        AForm(std::string name, int gradeSign, int gradeExecute);

        ~AForm();
        AForm& operator=(const AForm& obj);

        void beSigned(const Bureaucrat& obj);
        // void signForm() const;
        std::string get_name() const;
        int get_gradeSign() const;
        int get_gradeExecute() const;
        // int get_grade() const;
        bool get_signed() const;
        void execute(Bureaucrat const & executor) const;
        virtual void action() const = 0;
        // void increment();    
        // void decrement();
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
        // int _grade;
        const std::string _name;
        const int  _gradeSign; //(1, 150)
        const int _gradeExecute; // (1, 150)
        bool _signed;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
