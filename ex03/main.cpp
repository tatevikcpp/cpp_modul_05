#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include  "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b;
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << rrf<< "\n";
		delete rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->execute(b);
		delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("prsidential pardon", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
		return (0);
}