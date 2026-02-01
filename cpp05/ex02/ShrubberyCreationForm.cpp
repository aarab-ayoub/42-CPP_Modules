#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery" , 145 , 137), target(target)
{
    std::cout << "ShrubberyCreationForm constructor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
    std::cout << "ShrubberyCreationForm copy constructor called " << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    std::cout << "ShrubberyCreationForm assignment operator called " << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called " << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& obj) const
{
   if (this->getSigned())
   {
        if(obj.getGrade() < this->getExecuteGrade())
        {
            std::ofstream f;
            f.open((target + "_shrubbery").c_str());
            f << "                      .     .  .      +     .      .          .\n"
                 << "     .       .      .     #       .           .\n"
                 << "        .      .         ###            .      .      .\n"
                 << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
                 << "          .      . \"####\"###\"####\"  .\n"
                 << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
                 << "  .             \"#########\"#########\"        .        .\n"
                 << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
                 << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
                 << "                .\"##\"#####\"#####\"##\"           .      .\n"
                 << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
                 << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
                 << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
                 << "            .     \"      000      \"    .     .\n"
                 << "       .         .   .   000     .        .       .\n"
                 << ".. .. ..................O000O........................ ...... ...\n";
            f.close();
        }
        else
            throw GradeTooLowException();
   }
   else 
    throw NotSignedException();
   
}