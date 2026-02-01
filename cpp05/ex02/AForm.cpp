#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), Signed(false), SignGrade(150), ExecuteGrade(150)
{
	std::cout << "Default constructor called" << std::endl;
}
AForm::AForm(const std::string &name, int SignGrade,
	int ExecuteGrade) : name(name), Signed(false), SignGrade(SignGrade),
	ExecuteGrade(ExecuteGrade)
{
	if (SignGrade < 1 || ExecuteGrade < 1)
		throw GradeTooHighException();
	if (SignGrade > 150 || ExecuteGrade > 150)
		throw GradeTooLowException();
	std::cout << "Parameterized constructor called" << std::endl;
}
AForm::AForm(const AForm &obj) : name(obj.name), Signed(obj.Signed),
	SignGrade(obj.SignGrade), ExecuteGrade(obj.ExecuteGrade)
{
	std::cout << "Copy constructor called" << std::endl;
}
AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
	{
		this->Signed = obj.Signed;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
    os << "AForm Name: " << obj.getName() << std::endl;
    if (obj.getSigned())
        os << "Status: Signed" << std::endl;
    else
        os << "Status: Not Signed" << std::endl;
    os << "Sign Grade: " << obj.getSignGrade() << std::endl;
    os << "Execute Grade: " << obj.getExecuteGrade() << std::endl;
    return os;
}

AForm::~AForm()
{
	std::cout << "Destructor called" << std::endl;
}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSigned() const
{
	return (this->Signed);
}

int AForm::getSignGrade() const
{
	return (this->SignGrade);
}

int AForm::getExecuteGrade() const
{
	return (this->ExecuteGrade);
}

void AForm::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > this->SignGrade)
        throw GradeTooLowException();
    this->Signed = true;
}