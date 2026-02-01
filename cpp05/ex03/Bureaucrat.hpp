#ifndef FE7AD8DC_656A_4A82_BE12_05872656E2D6
#define FE7AD8DC_656A_4A82_BE12_05872656E2D6
#ifndef D8BAB545_5318_4D19_9C50_1D75ACC63795
#define D8BAB545_5318_4D19_9C50_1D75ACC63795
#ifndef A82B4A40_96D5_4309_B4B7_19F09FA26F8C
#define A82B4A40_96D5_4309_B4B7_19F09FA26F8C
#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
class AForm; 

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

    void signForm(AForm& form);
    void executeForm(AForm const & form) const ;
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


#endif /* A82B4A40_96D5_4309_B4B7_19F09FA26F8C */


#endif /* D8BAB545_5318_4D19_9C50_1D75ACC63795 */


#endif /* FE7AD8DC_656A_4A82_BE12_05872656E2D6 */
