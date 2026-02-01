#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{

    std::cout << "PresidentialPardonForm constructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
    std::cout << "PresidentialPardonForm copy constructor called " << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    std::cout << "PresidentialPardonForm assignment operator called " << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called " << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& obj) const
{
    if (this->getSigned())
    {
        if (obj.getGrade() < this->getExecuteGrade())
        {
            std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
        }
        else
            throw GradeTooLowException();
    }
    else
        throw NotSignedException();
}