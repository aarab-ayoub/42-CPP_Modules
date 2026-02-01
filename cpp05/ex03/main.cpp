#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
    std::cout << "----------------------------test1--------------------------------------" << std::endl;
    try
    {
        Bureaucrat b1("Aarab", 1);
        AForm* f1 = new ShrubberyCreationForm("home");
        AForm* f3 = new RobotomyRequestForm("bendo");
        AForm* f2 = new PresidentialPardonForm("Aarab");


        std::cout << b1 << std::endl;
        std::cout << *f1 << std::endl;
        
        std::cout << " ------ " << std::endl;
        b1.signForm(*f1);
        b1.executeForm(*f1);
        std::cout << " ------ " << std::endl;
        // f1->execute(b1);
        
        b1.signForm(*f3);
        b1.executeForm(*f3);
        std::cout << " ------ " << std::endl;
        // f3->execute(b1);
        
        b1.signForm(*f2);
        b1.executeForm(*f2);
        std::cout << " ------ " << std::endl;

        // f2->execute(b1);
        delete f1;
        delete f2;
        delete f3;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}