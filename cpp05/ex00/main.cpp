#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("A" , 999);
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
        
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}