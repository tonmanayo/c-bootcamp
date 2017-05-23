//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX00_PONY_HPP
#define EX00_PONY_HPP


#include <string>

class Pony {


public:
	virtual ~Pony();


	const std::string getPname() const;

	void setPname(const std::string Pname);

	const std::string getPcolour() const;

	void setPcolour(const std::string Pcolour);

	const std::string getPweight() const;

	void setPweight(const std::string Pweight);

	Pony();

	Pony(const std::string Pname, const std::string Pcolour, const std::string Pweight);

	void ponyOnTheHeap();

	void ponyOnTheStack();

private:
	std::string Pname;
	std::string Pcolour;
	std::string Pweight;

};


#endif //EX00_PONY_HPP
