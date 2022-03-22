#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialForm", 25, 5, "target_defolt") {}
PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("PresidentialForm", 25, 5, _target){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialForm", 25, 5, other.getTarget()){}
PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	(void) other;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::isGradeOk(executor.getGrade(), Form::getGradeExec());
	Form::isSigned();
	
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox\n";
}