#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade(1)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name , int grade) : name(name)
{
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
    std::cout << "Bureaucrat parametrized constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) 
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
    {
        this->grade = obj.grade;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os , const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

int Bureaucrat::increment()
{
    if(grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
    return grade;
}

int Bureaucrat::decrement()
{
    if(grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
    return grade;
}