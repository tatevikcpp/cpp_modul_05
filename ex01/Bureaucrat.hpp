#pragma once
#include <iostream>
#include "Form.hpp"


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

        void signForm(const Form& obj); // add a signForm() member function to the Bureaucra

        // class Exception : public std::exception
        // {
        //     public:
        //         Exception() {};
        //         // ~Exception() {};
        class GradeTooHighException : public std::exception
        {
            public:
            GradeTooHighException()
            {
                std::cout << __PRETTY_FUNCTION__ << std::endl;
            }
                const char* what() const throw();
                // {
                //     return ("Grade Too High\n");
                // }
        };


        class GradeTooLowException : public std::exception
        {
            // std::cout << __PRETTY_FUNCTION__ << std::endl;
            public:
            GradeTooLowException()
            {
                std::cout << __PRETTY_FUNCTION__ << std::endl;
            }
                const char* what() const throw();
                // {
                //     return ("Grade Too Low\n");
                // }
            // std::cout << "Grade Too Low\n";
        };
        // const char* what() const throw()
        // {
        //     return ("Exception\n");
        // }
            // private:
                /* data */
    private:
        std::string _name;
        int _grade;
}; 

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
// {
//     return (os << "_grade = " << obj.getGrade() << "\n" << "_name = " << obj.getName() << "\n"); 
// }