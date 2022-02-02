#include "sed.hpp"

void Sed::doRaplace(std::string const &file, char *imp, char *outp){

	std::ifstream input;
	std::ofstream output;
	std::string str;

	input.open(file);
	if (!input){
		std::cout << "open file error" << "\n";
		return;
	}
	output.open(file + ".new", std::ios::trunc);
	if (!output){
		std::cout << "file.new was not created" << "\n";
		input.close();
		return;
	}
	// while (getline(output, str)) {
		
	// }
}