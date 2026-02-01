#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm constructor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
    std::cout << "RobotomyRequestForm copy constructor called " << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    std::cout << "RobotomyRequestForm assignment operator called " << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called " << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& obj) const
{
   if (this->getSigned())
   {
        if(obj.getGrade() < this->getExecuteGrade())
        {
            std::cout << "(((((((((((((((((((((((drilling noise)))))))))))))))))))))))" << std::endl;
            if (rand() % 2) 
                std::cout << target << " has been robotomized successfully." << std::endl;
            else
                std::cout << "Failed to robotomize " << target << "." << std::endl;
        }
        else
            throw GradeTooLowException();
   }
   else 
       throw NotSignedException();
}