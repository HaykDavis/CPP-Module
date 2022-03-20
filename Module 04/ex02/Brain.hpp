#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(std::string ideas);
		Brain(const Brain& other);
		Brain &operator=(Brain const &other);
		virtual ~Brain();

		void setIdeas(std::string str, int i);
		const std::string &getIdeas(int i) const;
};

#endif