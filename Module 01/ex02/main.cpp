#include <iostream>

int main() {

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = *stringPTR;

	std::cout << &str << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << str << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}