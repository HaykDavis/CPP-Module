#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>

class Sed {
public:
	Sed();
	~Sed();
	void doRaplace(std::string const &file, std::string imp, std::string outp);
};

#endif