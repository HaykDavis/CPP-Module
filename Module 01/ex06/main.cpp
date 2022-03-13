#include "Karen.hpp"

void print_line(std::string inp) {
	Karen karen;

	std::cout << "[ " + inp + " ]" << std::endl;
	karen.complain(inp);
}

int getarg(std::string imp) {
	std::string array_level[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	int i;
	for (i = 0; i < 4; i++)
		if (imp == array_level[i])
			break ;

	return (i);
}

int main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	int level = getarg(argv[1]);
	switch(level) {
		case 0: print_line("DEBUG");
		case 1: print_line("INFO");
		case 2: print_line("WARNING");
		case 3: print_line("ERROR");
					break ;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}