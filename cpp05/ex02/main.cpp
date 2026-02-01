#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::cout << "----------------------------test1--------------------------------------" << std::endl;
    try
    {
        Bureaucrat b1("b1", 136);
        AForm* f1 = new ShrubberyCreationForm("home");
        std::cout << b1 << std::endl;
        std::cout << *f1 << std::endl;
        b1.signForm(*f1);
        f1->execute(b1);

        delete f1;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}