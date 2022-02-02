#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>

class Sed {
public:
	Sed();
	~Sed();
	void doRaplace(std::string const &file, char *imp, char *outp);
};

#endif