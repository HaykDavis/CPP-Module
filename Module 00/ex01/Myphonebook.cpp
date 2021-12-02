#include "Myphonebook.hpp"

MyPhoneBook::MyPhoneBook() {
	contacts = new Contacts[8];
}

MyPhoneBook::~MyPhoneBook() {
	delete[] contacts;
	std::cout << "PhoneBook has been deleted" << std::endl;
}

void MyPhoneBook::addContact(void) {
	Contacts person;
	for (int i = 0; i < 5; i++) {
		std::cout << Contacts::data[i] << " >> ";
		getline(std::cin, person.contacts[i]);
	}
	if (size == 8)
		size = 0;
	std::cout << size + 1 << " contact was created";
	contacts[size] = person;
	size++;
}

void MyPhoneBook::findContact(void) {
	if (size < 1) {
		std::cout << "Phonebook if empty" << std::endl;
		return ;
	}
	maketable();
	// std::cout << "For more information toucch the index or press 0 to EXIT";
	// int indx;
	// std::cin >> indx;
	// if (indx == 0)
		return ;
	
}

void MyPhoneBook::maketable(void) {
	std::cout << "|******************************************|" << std::endl;
	std::cout << "|    Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|******************************************|" << std::endl;
	for (std::size_t z = 0; z < 8; z++) {
		std::string first = checkData(contacts[z].contacts[0]);
		std::string last = checkData(contacts[z].contacts[1]);
		std::string nick = checkData(contacts[z].contacts[2]);

		std::cout << '|' << std::setw(9) << z + 1 << '|';
		std::cout << std::setw(10) << std::right << first << '|';
		std::cout << std::setw(10) << std::right << last << '|';
		std::cout << std::setw(10) << std::right << nick << '|';
		std::cout << std::endl;
		std::cout << "|-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*|" << std::endl;
	}
}

std::string& MyPhoneBook::checkData(std::string &datas) {
	if(datas.length() > 10)
		return datas.substr(0, 9).append(".");
	return datas;
}