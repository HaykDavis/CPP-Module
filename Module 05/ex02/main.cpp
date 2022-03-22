#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void testPrint(Bureaucrat &b, Form &f){
	std::cout << "\n" << std::endl;
	std::cout << b << std::endl;
	std::cout << f << std::endl;
	b.signForm(f);
	b.executeForm(f);
	std::cout << f << std::endl;
	std::cout << "\n" << std::endl;
}

int main(void){

	std::cout << "<<<<<<<<ShrubberyCreationForm test>>>>>>>>>>>>>" << std::endl;
	Bureaucrat bob("top", 1);
	ShrubberyCreationForm s_form("smth1");
	testPrint(bob, s_form);
	
	Bureaucrat mid("mid", 100);
	ShrubberyCreationForm mid_form("smth2");
	testPrint(mid, mid_form);

	Bureaucrat last("last", 150);
	ShrubberyCreationForm last_form("smth3");
	testPrint(last, last_form);

	// std::cout << "<<<<<<<<RobotomyRequestForm test>>>>>>>>>>>>>" << std::endl;
	// Bureaucrat r1("top", 1);
	// RobotomyRequestForm r_form("smth1");
	// testPrint(r1, r_form);
	
	// Bureaucrat r_mid("mid", 100);
	// RobotomyRequestForm r_midl("smth2");
	// testPrint(r_mid, r_midl);

	// Bureaucrat r_last("last", 150);
	// RobotomyRequestForm last_r("smth3");
	// testPrint(r_last, last_r);

	// std::cout << "<<<<<<<<PresidentialPardonForm test>>>>>>>>>>>>>" << std::endl;
	// Bureaucrat p1("top", 1);
	// PresidentialPardonForm p_form("smth1");
	// testPrint(p1, p_form);
	
	// Bureaucrat p_mid("mid", 100);
	// PresidentialPardonForm p_midl("smth2");
	// testPrint(p_mid, p_midl);

	// Bureaucrat p_last("last", 150);
	// PresidentialPardonForm last_p("smth3");
	// testPrint(p_last, last_p);
}