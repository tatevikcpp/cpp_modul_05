#include "ShrubberyCreationForm.hpp"
#include <fstream>

// ShrubberyCreationForm();
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery", 145, 147) //chi nkarum, 145-ic mec
{
    this->_target = target;
}
 
ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    return (*this);
}

void ShrubberyCreationForm::action() const
{
    std::ofstream ifs(this->_target.c_str());
    ifs << "    ccee88oo" << std::endl;
    ifs << "  C8O8O8Q8PoOb o8oo" << std::endl;
    ifs << " dOB69QO8PdUOpugoO9bD" << std::endl;
    ifs << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
    ifs << "    6OuU  /p u gcoUodpP" << std::endl;
    ifs << "      \\\\\\//  /douUP" << std::endl;
    ifs << "       \\\\\\/////" << std::endl;
    ifs << "         ||||/" << std::endl;
    ifs << "         ||||/" << std::endl;
    ifs << "         |||||" << std::endl;
    ifs << "   ...../|||||\\...." << std::endl;
    ifs.close();
}