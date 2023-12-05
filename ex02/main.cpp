#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include  "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// int main()
// {
//     try
//     {
//         Bureaucrat b(-10, "bob");
//         Form obj("form", 120); // TO DO ashxatacnel
//         obj.beSigned(b);

//         std::cout << obj << std::endl;
//         // std::cout << obj.getGrade();
//     }

//     // catch(const Form::GradeTooHighException& ex)
//     // {
//     //    std::cout << ex.what();
//     // }

//     // catch(const Form::GradeTooLowException& ex)
//     // {
//     //    std::cout << ex.what();
//     // }

//     catch(std::exception& ex)
//     {
//         std::cout << ex.what();
//     }
// }


int	main(void)
{
	ShrubberyCreationForm	s1("s1");
	RobotomyRequestForm		r1("r1");
	PresidentialPardonForm	p1("p1");

	Bureaucrat				b1(145, "b1");
	Bureaucrat				b2(137, "b2");
	Bureaucrat				b3(1, "b3");

	std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl << std::endl;

	std::cout << s1 << std::endl;

	b3.executeForm(s1);
	b1.signForm(s1);
	b1.executeForm(s1);
	b2.executeForm(s1);
	b3.executeForm(s1);

	std::cout << std::endl;

	std::cout << r1 << std::endl;

	b2.signForm(r1);
	std::cout << r1 << std::endl;
	b3.signForm(r1);
	std::cout << r1 << std::endl;
	b3.executeForm(r1);
	b3.executeForm(r1);
	b3.executeForm(r1);

	std::cout << std::endl;

	std::cout << p1 << std::endl;

	b3.signForm(p1);
	std::cout << p1 << std::endl;
	b3.executeForm(p1);
	return (0);
}