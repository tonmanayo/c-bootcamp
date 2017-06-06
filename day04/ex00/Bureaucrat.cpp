//
// Created by Tony MACK on 2017/05/30.
//

#include "Bureaucrat.hpp"

const std::string &Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooLowException();
	}else if (grade > 150) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		_grade = grade;
	}
}

void Bureaucrat::incGrade() {
	if (_grade < 1) {
		throw Bureaucrat::GradeTooLowException();
	}else if (_grade > 150) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		_grade++;
	}
}

void Bureaucrat::decGrade() {
	if (_grade < 1) {
		throw Bureaucrat::GradeTooLowException();
	}else if (_grade > 150) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		_grade--;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade Too Low Exception\n";
}

const char *Bureaucrat::GradeTooLowException::what() const {
	return "Grade to high Exception\n";
}
