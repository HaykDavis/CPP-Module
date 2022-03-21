#include "Form.hpp"

Form::Form(): _name(""), _isSigned(false), _gradeSign(0), _gradeExec(150){ 
    std::cout << "Form default Constructor called\n";
}

Form::Form(std::string const &_name, unsigned int const &_gradeSign, unsigned int const &_gradeExec) : _name(_name){
    std::cout << "Form Constructor called\n";
    if (_grade < 1)
        throw GradeTooLowException();
    else if (_grade > 150)
        throw GradeTooHighException();
    else
        this->_grade = _grade;
}

Form::Form(const Form& other){
    std::cout << "Form Copy Constructor called\n";
    if (other._grade < 1)
        throw GradeTooLowException();
    else if (other._grade > 150)
        throw GradeTooHighException();
    else
        *this = other;  
}

Form &Form::operator=(Form const &other){
    std::cout << "Form Copy assignment operator called\n";
    if (other._grade < 1)
        throw GradeTooLowException();
    else if (other._grade > 150)
        throw GradeTooHighException();
	else if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

Form::~Form(){ 
    std::cout << "Form destructor called\n";
}

const std::string &Form::getName(void) const{
    return (this->_name);
}

unsigned int const &Form::getGradeSign(void) const{
    return (this->_gradeSign);
}

unsigned int const &Form::getGradeExec(void) const{
    return (this->_gradeExec);
}

bool const &Form::getIsSigned(void) const {
    return (this->_isSigned);
}

const char *Form::GradeTooHighException::what() const throw(){
    return ("Grade is too HIGH!");
}

const char *Form::GradeTooLowException::what() const throw(){
    return ("Grade is too LOW!");
}

std::ostream &operator<<(std::ostream &os, Form const &other){
    os << other.getName() << "bureaucrat rank is " << other.getGrade() << "\n";
    return (os);
}