#ifndef FA702F8B_D6FC_4280_B5D3_B961EB7A7ED6
#define FA702F8B_D6FC_4280_B5D3_B961EB7A7ED6
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

#endif

