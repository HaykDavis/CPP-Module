#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150){ }

Bureaucrat::Bureaucrat(std::string const &_name, unsigned int const &_grade) : _name(_name){
    if (_grade < 1)
        throw GradeTooLowException();
    else if (_grade > 150)
        throw GradeTooHighException();
    else
        this->_grade = _grade;
}

Bureaucrat::Bureaucrat(std::string const &_name) : _name(_name), _grade(150){ }

Bureaucrat::Bureaucrat(unsigned int const &_grade) : _name(""){
    if (_grade < 1)
        throw GradeTooLowException();
    else if (_grade > 150)
        throw GradeTooHighException();
    else
        this->_grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other){
    if (other._grade < 1)
        throw GradeTooLowException();
    else if (other._grade > 150)
        throw GradeTooHighException();
    else
        *this = other;  
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other){
    std::cout << "Bureaucrat Copy assignment operator called\n";
    if (other._grade < 1)
        throw GradeTooLowException();
    else if (other._grade > 150)
        throw GradeTooHighException();
	else if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){ }

const std::string &Bureaucrat::getName(void) const{
    return (this->_name);
}

unsigned int const &Bureaucrat::getGrade(void) const{
    return (this->_grade);
}

void Bureaucrat::incrementGrade(){
    if (this->_grade - 1 < 1)
        throw GradeTooLowException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade(){
    if (this->_grade + 1 > 150)
        throw GradeTooHighException();
    else
        this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade is too HIGH!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade is too LOW!");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other){
    os << other.getName() << "bureaucrat rank is " << other.getGrade() << "\n";
    return (os);
}