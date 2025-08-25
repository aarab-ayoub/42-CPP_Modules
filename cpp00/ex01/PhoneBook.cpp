/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:28:55 by ayoub             #+#    #+#             */
/*   Updated: 2025/08/13 14:37:02 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::get_name()
{
	return this->_name;
}
std::string Contact::get_lastname()
{
	return this->_lastname;
}
std::string Contact::get_nickname()
{
	return this->_nickname;
}
std::string Contact::get_phonenumber()
{
	return this->_phonenumber;
}

std::string Contact::get_darkestsecret()
{
	return this->_darkestsecret;
}

void Contact::set_name(std::string name)
{
	this->_name = name;
}
void Contact::set_lastname(std::string lastname)
{
	this->_lastname = lastname;
}
void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}
void Contact::set_phonenumber(std::string phonenumber)
{
	this->_phonenumber = phonenumber;
}
void Contact::set_darkestsecret(std::string darkestsecret)
{
	this->_darkestsecret = darkestsecret;
}

PhoneBook::PhoneBook(void)
{
	this->_count = 0;
	this->_index = 0;
	std::cout << "phone book is ready for u try those cmd (ADD, SEARCH, EXIT) \n";
	return ;
}
PhoneBook::~PhoneBook(void)
{
	std::cout << "phone book is destroyed ";
	std::cout << "phone book is destroyed ";
	return ;
}

void PhoneBook::add(void)
{
    Contact newContactObj;
	
	std::string input;	
	
	std::cout << "---------- ADD A NEW CONTACT ----------" << std::endl;
	
	std::string name, lastname, nickname, phonenumber, darkestsecret;
	std::cout << "Enter name: ";
	std::getline(std::cin, input);
	newContactObj.set_name(input);
	
	std::cout << "Enter lastname: ";
	std::getline(std::cin, input);
	newContactObj.set_lastname(input);
	
	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	newContactObj.set_nickname(input);
	
	std::cout << "Enter phone_number: ";
	std::getline(std::cin, input);
	newContactObj.set_phonenumber(input);
	
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	newContactObj.set_darkestsecret(input);
	

	if (newContactObj.get_name().empty() || 
		newContactObj.get_lastname().empty() || 
		newContactObj.get_nickname().empty() || 
		newContactObj.get_phonenumber().empty() ||
		newContactObj.get_phonenumber().empty() ||
		newContactObj.get_darkestsecret().empty())
	{
		std::cout << "All fields must be filled. Contact not added.\n";
		return ;
	}
	// else if (newContactObj.get_phonenumber().length() != 10)
	// {
	// 	std::cout << "Phone number must be 10 digits long. Contact not added.\n";
	// 	return ;
	// }
	std::cout << "Adding contact...\n";
	this->_Contacts[this->_index] = newContactObj;
	// else if (newContactObj.get_phonenumber().length() != 10)
	// {
	// 	std::cout << "Phone number must be 10 digits long. Contact not added.\n";
	// 	return ;
	// }
	std::cout << "Adding contact...\n";
	this->_Contacts[this->_index] = newContactObj;

	if (this->_index < 7)
		this->_index++;
	else
		this->_index = 0;

	if (this->_count < 8)
		_count++;
	std::cout << "contact added Successfully \n" ; 
}

void PhoneBook::search()
{
	std::string trancated_name , trancated_last_name , trancated_nickname , input;
	int index;
	std::string trancated_name , trancated_last_name , trancated_nickname , input;
	int index;
	std::cout << "---------- PHONIEST OF BOOKS ----------" << std::endl;
	std::cout << "Index | First Name | Last Name | Nickname" << std::endl;

	for (int i = 0; i < this->_count; i++)
	{
		trancated_name = this->_Contacts[i].get_name();		
		trancated_last_name = this->_Contacts[i].get_lastname();		
		trancated_nickname = this->_Contacts[i].get_nickname();		
		
		if (trancated_name.length() > 10)
			trancated_name = trancated_name.substr(0, 9) + ".";
			trancated_name = trancated_name.substr(0, 9) + ".";
		if (trancated_last_name.length() > 10)
			trancated_last_name = trancated_last_name.substr(0, 9) + ".";
			trancated_last_name = trancated_last_name.substr(0, 9) + ".";
		if (trancated_nickname.length() > 10)
			trancated_nickname = trancated_nickname.substr(0, 9) + ".";
		std::cout << std::setw(10) << i + 1 << "|"
		          << std::setw(10) << trancated_name << "|"
		          << std::setw(10) << trancated_last_name << "|"
		          << std::setw(10) << trancated_nickname << "|"
				  << std::setw(10) << this->_Contacts[i].get_phonenumber() << std::endl;
			trancated_nickname = trancated_nickname.substr(0, 9) + ".";
		std::cout << std::setw(10) << i + 1 << "|"
		          << std::setw(10) << trancated_name << "|"
		          << std::setw(10) << trancated_last_name << "|"
		          << std::setw(10) << trancated_nickname << "|"
				  << std::setw(10) << this->_Contacts[i].get_phonenumber() << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;

	std::cout << "enter the index of the contact u want to search for ";
	std::getline(std::cin , input);
	index = atoi(input.c_str());
	if (index < 1 || index > this->_count)
	{
		std::cout << "Invalid index. Please try again.\n";
		return ;
	}
	for (int i = 0; i < this->_count; i++)
	{
		if(index == i)
		{
			std::cout << "Index | First Name | Last Name | Nickname" << std::endl;
			std::cout << std::setw(10) << i + 1 << "|"
			          << std::setw(10) << this->_Contacts[i].get_name() << "|"
			          << std::setw(10) << this->_Contacts[i].get_lastname() << "|"
			          << std::setw(10) << this->_Contacts[i].get_nickname() << "|"
			          << std::setw(10) << this->_Contacts[i].get_phonenumber() << std::endl;
		}
	}

	std::cout << "enter the index of the contact u want to search for ";
	std::getline(std::cin , input);
	index = atoi(input.c_str());
	if (index < 1 || index > this->_count)
	{
		std::cout << "Invalid index. Please try again.\n";
		return ;
	}
	for (int i = 0; i < this->_count; i++)
	{
		if(index == i)
		{
			std::cout << "Index | First Name | Last Name | Nickname" << std::endl;
			std::cout << std::setw(10) << i + 1 << "|"
			          << std::setw(10) << this->_Contacts[i].get_name() << "|"
			          << std::setw(10) << this->_Contacts[i].get_lastname() << "|"
			          << std::setw(10) << this->_Contacts[i].get_nickname() << "|"
			          << std::setw(10) << this->_Contacts[i].get_phonenumber() << std::endl;
		}
	}
}

int main ()
{
	PhoneBook obj_phone;
	std::string  cmd;
	while (1)
	{
		std::cout << ">";
		std::getline(std::cin , cmd);
		
		if (cmd == "ADD")
			obj_phone.add();
		else if(cmd == "SEARCH")
			obj_phone.search();
		else if (cmd == "EXIT")
			break;		
	}	
	return 0;
}