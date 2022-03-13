#include "sed.hpp"

int check_string(char **argv) {
	if (argv[2][0] == '\0' || argv [3][0] == '\0')
		return (1);
	return (0);
}

int main(int argc, char **argv) {
	Sed replacer;

	if (argc != 4)
	{
		std::cout << "incorrect input\n";
		return (1); 
	}
	if (check_string(argv)) {
		std::cout << "Empty strings\n";
		return (1);
	}

	replacer.doRaplace(argv[1], argv[2], argv[3]);
	return (0);
}