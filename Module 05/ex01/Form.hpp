#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string _name;
        const bool _isSigned;
        const unsigned int _gradeSign;
        const unsigned int _gradeExec;
	public:
		Form();
		Form(std::string const &_name, unsigned int const &_gradeSign, unsigned int const &_gradeExec);
		Form(const Form& other);
		Form &operator=(Form const &other);
		~Form();

		const std::string &getName(void) const;
        unsigned int const &getGradeSign(void) const;
        unsigned int const &getGradeExec(void) const;
        bool const &getIsSigned(void) const;

        beSigned(const Bureaucrat &man);

        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };
};
std::ostream &operator<<(std::ostream &os, Form const &other);

#endif