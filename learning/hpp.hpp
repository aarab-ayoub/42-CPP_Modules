#ifndef HPP_HPP
#define HPP_HPP

#include <iostream>

class hpp
{
private:
	int *num;
	// std::string name;
public:
	hpp()
	{
		num = new int;
        *num = 0;
		std::cout << "init"<< std::endl;
	};
	~hpp()
	{
		std::cout << "died"<< std::endl;
		delete num;
	};
	hpp &operator=(const hpp &other)
	{
		std::cout << "assignment operator called" << std::endl;
		if (this != &other)
		{
			*num = *(other.num);
		}
		return *this;
	};
	void setnum(int a)
	{
		*num = a;
	};
	int getnum() const
	{
		return *num;
	};
	// void setname(std::string);
	// std::string getname() const ;
};

// int hpp::getnum()const
// {
// 	return this->num;
// }

// void hpp::setnum(int a)
// {
// 	num = a;
// }

// std::string hpp::getname()const
// {
// 	return this->name;
// }

// void hpp::setname(std::string a)
// {
// 	name = a;
// }
#endif