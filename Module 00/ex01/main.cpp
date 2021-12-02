#include <string>
#include <iostream>
#include <unistd.h>
#include <unistd.h>
#include "Myphonebook.hpp"

int main(void) {

	bool interface = true;
	MyPhoneBook Myphonebook;
	std::string command;

	std::cout << "        Hello, dear owner!" << std::endl;
	// sleep(3);
	std::cout << "-*--Awesome phone book is ready--*-" << std::endl;
	while (interface) {
		std::cout << std::endl << "Enter a command [ADD, SEARCH, EXIT]" << std::endl;
		getline(std::cin, command);
		if (command == "ADD") {
			Myphonebook.addContact();
		} else if (command == "SEARCH") {
			Myphonebook.findContact();
		} else if (command == "EXIT") {
			interface = false;
			std::cout << "Good bye!" << std::endl;
		} else {
			std::cout << "Enter a valid command" << std::endl;
		}
	}
	return (0);
}