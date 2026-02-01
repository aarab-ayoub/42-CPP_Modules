#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    std::cout << "----------------------------test1--------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("Alice", 50);
        Form f("TopSecret", 30, 20);

        std::cout << b << std::endl;
        std::cout << f << std::endl;

        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }


    std::cout << "----------------------------test2--------------------------------------" << std::endl;
    try
    {
        Bureaucrat b2("Bob", 20);
        Form f2("Confidential", 30, 20);
        std::cout << b2 << std::endl;
        std::cout << f2 << std::endl;
        
        b2.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}