#include "sed.hpp"

Sed::Sed() {}

Sed::~Sed() {}

void Sed::doRaplace(std::string const &file, std::string imp, std::string outp){

	std::ifstream input;
	std::ofstream output;
	std::string buf;
	char ch;

	input.open(file);
	if (!input){
		std::cout << "open file error\n";
		return ;
	}
	while (input.get(ch))
		buf += ch;
	if (!input.eof()) {
		std::cout << "Failed to read file!\n" ;
	}
	output.open(file + ".replace", std::ios::trunc);
	if (!output){
		std::cout << "file.new was not created\n";
		input.close();
		return ;
	}
	
	std::string::size_type pos(0);

	while (1) {
		pos = buf.find(imp, pos);
		if (pos == std::string::npos)
			break ;
		buf.erase(pos, imp.length());
		buf.insert(pos, outp);
		pos += outp.length();
	}
	output << buf << std::flush;
}