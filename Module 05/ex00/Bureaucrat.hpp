#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {
	protected:
		std::string _name;
        unsigned int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const &_name);
        Bureaucrat(unsigned int const &_name);
        Bureaucrat(std::string const &_name, unsigned int const &_grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();

		const std::string &getName(void) const;
        unsigned int const &getGrade(void) const;

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };
};
std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif