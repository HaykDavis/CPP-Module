#include <string>
#include <iostream>

int main(int ac, char **av) {
	std::string str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < ac; i++) {
			str = av[i];
			for (size_t z = 0; z < str.length(); z++)
				std::cout << (char)toupper(str[z]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}