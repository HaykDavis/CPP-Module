#ifndef _MYPHONEBOOK_HPP_
#define _MYPHONEBOOK_HPP_

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Contacts.hpp"

class MyPhoneBook {
private:
	std::size_t size;
	Contacts *contacts;
public:
	MyPhoneBook();
	~MyPhoneBook();

	void addContact(void);
	void findContact(void);
	void showFullcontact(int indx);
	void maketable(void);
	std::string& checkData(std::string &datas);
};

#endif