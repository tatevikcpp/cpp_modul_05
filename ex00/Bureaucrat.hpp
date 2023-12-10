#pragma once
#include <iostream>

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat(int grade, const std::string& name);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& obj);
        std::string getName(void) const;
        int getGrade(void) const;
        void increment();
        void decrement();
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };


        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
    private:
        const std::string _name;
        int _grade;
}; 

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);