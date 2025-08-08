/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:47:03 by ayoub             #+#    #+#             */
/*   Updated: 2025/08/08 15:19:26 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
// #include <string>
#include <iomanip>

class Contact
{
	private:
		std::string _name;
		std::string _lastname; 
		std::string _nickname;
		std::string _phonenumber ;
		std::string _darkestsecret;
	public:
		Contact(void);
		std::string get_name();
		std::string get_lastname();
		std::string get_nickname();
		std::string get_phonenumber();
		std::string get_darkestsecret();
		void set_name(std::string name);
		void set_lastname(std::string last_name);
		void set_nickname(std::string nickname);
		void set_phonenumber(std::string phonenumber);
		void set_darkestsecret(std::string darkestsecret);
		~Contact(void);
};

class PhoneBook
{
	public:
		PhoneBook(void);
		void add(void);
		void search(void);
		~PhoneBook(void);
	private:
		Contact Contacts[8];
		int count;
		int index;		
};

#endif