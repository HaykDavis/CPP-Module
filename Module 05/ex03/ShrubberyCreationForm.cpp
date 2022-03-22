#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyForm", 145, 137, "target_defolt") {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrubberyForm", 145, 137, _target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("ShrubberyForm", 145, 137, other.getTarget()){}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	(void) other;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	Form::isGradeOk(executor.getGrade(), Form::getGradeExec());
	Form::isSigned();

	std::ofstream output;
	output.open(getTarget() + "_shrubbery", std::ios::trunc);
	if (!output){
		std::cerr << getTarget() + "_shrubbery was not created\n";
		return ;
	} else {
			output 
				<< "___________ ¶¶¶¶¶¶¶¶¶ \n"
				<< "____________ ¶¶¶¶¶¶¶____¶¶¶ \n"
				<< "_____________ ¶¶¶¶¶__¶¶¶¶¶¶¶¶¶ \n"
				<< "______¶¶¶¶¶___ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n"
				<< "___ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______¶¶¶ \n"
				<< "_ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__________¶ \n"
				<< "¶¶¶_______ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n"
				<< "_______ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n"
				<< "_____¶¶¶¶¶¶¶¶¶__ ¶¶¶____¶¶¶¶¶¶¶¶¶ \n"
				<< "____¶¶¶¶¶¶¶_____ ¶¶¶¶______¶¶¶¶¶¶ \n"
				<< "____¶¶¶¶¶_______ ¶¶¶¶_______¶¶¶¶¶ \n"
				<< "____¶¶¶¶_________ ¶¶¶¶______¶¶¶¶¶ \n"
				<< "____¶¶¶__________ ¶¶¶¶_______¶¶¶¶ \n"
				<< "____¶¶____________ ¶¶¶¶______¶¶¶ \n"
				<< "____¶¶____________ ¶¶_¶_______¶¶ \n"
				<< "____¶_____________ ¶¶¶¶¶______¶ \n"
				<< "___________________ ¶¶¶¶ \n"
				<< "___________________ ¶¶_¶ \n"
				<< "___________________ ¶¶¶¶¶ \n"
				<< "___________________ ¶¶¶¶¶ \n"
				<< "____________________ ¶¶_¶ \n"
				<< "____________________ ¶¶¶¶¶____¶ \n"
				<< "_________________ ¶__¶¶¶¶¶__¶¶ \n"
				<< "_________________ ¶¶¶¶¶¶¶¶¶¶¶¶¶ \n"
				<< "__________________ ¶¶¶¶¶¶¶¶¶ \n";
			output.close();
	}
}