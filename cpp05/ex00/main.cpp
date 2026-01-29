#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("A" , 150);
        b1.increment();
        std::cout<< b1.getGrade() << std::endl;
        b1.increment();
        std::cout<< b1.getGrade() << std::endl;
        b1.increment();
        std::cout<< b1.getGrade() << std::endl;
        b1.increment();
        
        // for (int i = 0; i < 150; i++)
        // {
        //     b1.decrement();
        // }
        // std::cout<< b1.getGrade() << std::endl;
        
        std::cout << b1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}