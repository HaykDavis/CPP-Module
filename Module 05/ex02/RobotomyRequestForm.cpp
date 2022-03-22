#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyForm", 72, 45, "target_defolt") {}
RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyForm", 72, 45, _target){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyForm", 72, 45, other.getTarget()){}
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	(void) other;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	Form::isGradeOk(executor.getGrade(), Form::getGradeExec());
	Form::isSigned();
	
	if (rand() % 2)
		std::cout << "Bzzzzzzz! " << getTarget() << " has been robotomized successfully 50 percent of the time!\n"; 
	else
		std::cout << getTarget() << " failed" << std::endl;
}