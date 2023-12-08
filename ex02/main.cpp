#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
	
		// PresidentialPardonForm	PPF("PPF");//25 5
		// RobotomyRequestForm		RRF("RRF");//72 45
		ShrubberyCreationForm	SCF("SCF");//145 137

		Bureaucrat				bur(6, "bur");

		// std::cout << bur << std::endl;
		// std::cout << SCF << std::endl;
		bur.signForm(SCF);
		bur.executeForm(SCF);

		// std::cout << std::endl << RRF << std::endl;
		// bur.signForm(RRF);
		// bur.executeForm(RRF);

		// std::cout << std::endl << PPF << std::endl;
		// bur.signForm(PPF);
		// bur.executeForm(PPF);
    }
    catch(std::exception& ex)
    {
        std::cout << ex.what();
    }
	return (0);
}