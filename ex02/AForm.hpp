#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm();
        AForm(const AForm& obj);
        AForm(std::string name, int gradeSign, int gradeExecute);
        virtual~AForm();
        AForm& operator=(const AForm& obj);

        void beSigned(const Bureaucrat& obj);
        std::string get_name() const;
        int get_gradeSign() const;
        int get_gradeExecute() const;
        bool get_signed() const;
        void execute(Bureaucrat const & executor) const;
        virtual void action() const = 0;

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeError : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class SignedError : public std::exception
        {
            public:
                const char* what() const throw();
        };

    private:
        const std::string _name;
        const int  _gradeSign;
        const int _gradeExecute;
        bool _signed;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
