/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:28:55 by ayoub             #+#    #+#             */
/*   Updated: 2025/08/08 16:16:42 by ayoub            ###   ########.fr       */
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
	this->count = 0;
	this->index = 0;
	std::cout << "phone book is ready for u try those cmd (ADD, SEARCH, EXIT) \n";
	return ;
}
PhoneBook::~PhoneBook(void)
{
	std::cout << "phone book is destroyed hahahahah";
	return ;
}

void PhoneBook::add(void)
{
    Contact newContactObj;
	
	std::string input;
	if (count >= 8)
	{
		std::cout << "PhoneBook is full, cannot add more contacts.\n";
		return ;
	}
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
		newContactObj.get_darkestsecret().empty())
	{
		std::cout << "All fields must be filled. Contact not added.\n";
		return ;
	}
	this->Contacts[this->index] = newContactObj;

	if (this->index < 7)
		this->index++;
	else
		this->index = 0;

	if (this->count < 8)
		count++;
	std::cout << "contact added Successfully \n" ; 
}

std::string trancated_name , trancated_last_name , trancated_nickname;
void PhoneBook::search()
{
	std::cout << "---------- PHONIEST OF BOOKS ----------" << std::endl;
	std::cout << "Index | First Name | Last Name | Nickname" << std::endl;

	for (int i = 0; i < this->count; i++)
	{
		trancated_name = this->Contacts[i].get_name();		
		trancated_last_name = this->Contacts[i].get_lastname();		
		trancated_nickname = this->Contacts[i].get_nickname();		
		
		std::cout << std::setw(10) << i + 1 << " | "
		          << std::setw(10) << trancated_name << " | "
		          << std::setw(10) << trancated_last_name << " | "
		          << std::setw(10) << trancated_nickname << " | "
				  << std::setw(10) << this->Contacts[i].get_phonenumber() << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
	
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