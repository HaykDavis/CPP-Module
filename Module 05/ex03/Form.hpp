#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string _name;
        bool _isSigned;
        const unsigned int _gradeSign;
        const unsigned int _gradeExec;
        const std::string _target;
	public:
		Form();
		Form(std::string const &name, unsigned int const &gradeSign, unsigned int const &gradeExec, const std::string &target);
		Form(const Form& other);
		Form &operator=(Form const &other);
		virtual ~Form();

		const std::string &getName(void) const;
        const std::string &getTarget(void) const;
        bool const &getIsSigned(void) const;
        unsigned int const &getGradeSign(void) const;
        unsigned int const &getGradeExec(void) const;

        void beSigned(const Bureaucrat &man);
        void isGradeOk(int grade_to_check, int grade) const;
        void isSigned(void) const;
        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };

        class FormDoesNotSigned : public std::exception {
            virtual const char *what() const throw();
        };
};
std::ostream &operator<<(std::ostream &os, Form const &other);

#endif