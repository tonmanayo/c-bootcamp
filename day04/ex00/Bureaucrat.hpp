//
// Created by Tony MACK on 2017/05/30.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP


#include <string>

class Bureaucrat {
private:
	std::string const _name;
	int _grade;
public:
	const std::string &getName() const;

	Bureaucrat(std::string , int);

	int getGrade() const;

	void incGrade();
	void decGrade();

	class GradeTooHighException {
		virtual const char * what() const throw();
	};
	class GradeTooLowException {
		virtual const char * what() const throw();

	};
};


#endif //EX00_BUREAUCRAT_HPP
