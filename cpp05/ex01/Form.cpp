#include "Form.hpp"

Form::Form() : name("Default"), Signed(false), SignGrade(150), ExecuteGrade(150)
{
	std::cout << "Default constructor called" << std::endl;
}
Form::Form(const std::string &name, int SignGrade,
	int ExecuteGrade) : name(name), Signed(false), SignGrade(SignGrade),
	ExecuteGrade(ExecuteGrade)
{
	if (SignGrade < 1 || ExecuteGrade < 1)
		throw GradeTooHighException();
	if (SignGrade > 150 || ExecuteGrade > 150)
		throw GradeTooLowException();
	std::cout << "Parameterized constructor called" << std::endl;
}
Form::Form(const Form &obj) : name(obj.name), Signed(obj.Signed),
	SignGrade(obj.SignGrade), ExecuteGrade(obj.ExecuteGrade)
{
	std::cout << "Copy constructor called" << std::endl;
}
Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
	{
		this->Signed = obj.Signed;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}
Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSigned() const
{
	return (this->Signed);
}

int Form::getSignGrade() const
{
	return (this->SignGrade);
}

int Form::getExecuteGrade() const
{
	return (this->ExecuteGrade);
}

