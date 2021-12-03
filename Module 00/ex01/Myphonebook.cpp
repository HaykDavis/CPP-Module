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
		getline(std::cin, person.contact[i]);
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
	std::cout << "For more information toucch the index or press 0 to EXIT\n>> ";
	int indx;
	std::cin >> indx;
	std::cin.clear();
	if (indx == 0) {
		std::cin.ignore(1000, '\n');
		return ;
	}
	if (indx < 0 || indx > 8) {
		std::cout << "Ivalid index" << std::endl;
		std::cin.ignore(1000, '\n');
		return ;
	}
	showFullcontact(indx);
	std::cin.ignore(1000, '\n');
}

void MyPhoneBook::showFullcontact(int indx) {
	std::cout << "First Name " << contacts[indx - 1].contact[0] << std::endl;
	std::cout << "Last Name " << contacts[indx - 1].contact[1] << std::endl;
	std::cout << "Nickname " << contacts[indx - 1].contact[2] << std::endl;
	std::cout << "Phone Number " << contacts[indx - 1].contact[3] << std::endl;
	std::cout << "Darkest Secret " << contacts[indx - 1].contact[4] << std::endl;
}

void MyPhoneBook::maketable(void) {
	std::cout << "|******************************************|" << std::endl;
	std::cout << "|    Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|******************************************|" << std::endl;
	for (std::size_t z = 0; z < 8; z++) {
		std::string first = checkData(contacts[z].contact[0]);
		std::string last = checkData(contacts[z].contact[1]);
		std::string nick = checkData(contacts[z].contact[2]);

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