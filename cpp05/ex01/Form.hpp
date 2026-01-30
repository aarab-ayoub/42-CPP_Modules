#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool Signed;
        const int SignGrade;
        const int ExecuteGrade;
    public:
        Form();
        Form(const Form& obj);
        Form(const std::string& name , int SignGrade ,int ExecuteGrade);
        Form& operator=(const Form &obj);
        ~Form();

        std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(const Bureaucrat& obj);
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
std::ostream& operator<<(std::ostream& os , const Form& obj);

#endif