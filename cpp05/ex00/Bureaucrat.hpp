#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string& name , int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    int increment();
    int decrement();

    //nested exception classes
    class GradeTooHighException : public std::exception
    {
        const char* what() const throw()
        {
            return "Grade is too high!";
        }
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw()
        {
            return "Grade is too low!";
        }
    };
};

std::ostream& operator<<(std::ostream& os , const Bureaucrat& obj);
#endif