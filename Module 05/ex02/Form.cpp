#include "Form.hpp"

Form::Form(): _name(""), _isSigned(false), _gradeSign(0), _gradeExec(150){ 
    // std::cout << "Form default Constructor called\n";
}

Form::Form(std::string const &name, unsigned int const &gradeSign, unsigned int const &gradeExec, const std::string &target) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec), _target(target) {
    // std::cout << "Form Constructor called\n";
    if (_gradeSign < 1 || _gradeSign < 1)
        throw GradeTooLowException();
    else if (_gradeSign > 150 || _gradeSign > 150)
        throw GradeTooHighException();
}

Form::Form(const Form& other) : _name(other.getName()), _isSigned(other.getIsSigned()), _gradeSign(other.getGradeSign()), _gradeExec(other.getGradeExec()) {}

Form &Form::operator=(Form const &other){
    // std::cout << "Form Copy assignment operator called\n";
    if (this != &other)
        this->_isSigned = other._isSigned;
	return (*this);
}

Form::~Form(){ 
    // std::cout << "Form destructor called\n";
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

const std::string &Form::getTarget(void) const{
    return (this->_target);
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

const char *Form::FormDoesNotSigned::what() const throw(){
    return ("Form is Not Signed!");
}

std::ostream &operator<<(std::ostream &os, Form const &other){
    os << "Name: " << other.getName() << "\n" 
	<< "Form is " << (other.getIsSigned() ? "signed" : "not signed") << "\n" 
	<< "Grade to  sign: " << other.getGradeSign()<< "\n"
	<< "Grade to execute: " << other.getGradeExec() << "\n";
    return (os);
}

void Form::beSigned(const Bureaucrat &man){
    if (_isSigned)
		return ;
    else if (_gradeExec < man.getGrade())
		throw (GradeTooLowException());
	_isSigned = true;
}

void Form::isGradeOk(int grade_to_check, int grade) const{
    if (grade_to_check > grade)
        throw GradeTooLowException();
}

void Form::isSigned(void) const {
    if (!_isSigned)
        throw FormDoesNotSigned();
}