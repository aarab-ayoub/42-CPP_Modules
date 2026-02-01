#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool Signed;
        const int SignGrade;
        const int ExecuteGrade;
    public:
        AForm();
        AForm(const AForm& obj);
        AForm(const std::string& name , int SignGrade ,int ExecuteGrade);
        AForm& operator=(const AForm &obj);
        ~AForm();

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
std::ostream& operator<<(std::ostream& os , const AForm& obj);

#endif