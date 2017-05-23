//
// Created by Tony MACK on 2017/05/23.
//

#include <iostream>
#include "Pony.hpp"


Pony::Pony(){};

Pony::Pony(const std::string Pname, const std::string Pcolour, const std::string Pweight) : Pname(Pname),
                                                                                               Pcolour(Pcolour),
                                                                                               Pweight(Pweight) {}

Pony::~Pony() {

}

const std::string Pony::getPname() const {
	return Pname;
}

void Pony::setPname(const std::string Pname) {
	Pony::Pname = Pname;
}

const std::string Pony::getPcolour() const {
	return Pcolour;
}

void Pony::setPcolour(const std::string Pcolour) {
	Pony::Pcolour = Pcolour;
}

const std::string Pony::getPweight() const {
	return Pweight;
}

void Pony::setPweight(const std::string Pweight) {
	Pony::Pweight = Pweight;
}

void Pony::ponyOnTheHeap(){
	Pony* smallP = new Pony("ShyP", "Blue", "1");
	std::cout << "Creating a Pony on the Heap\n";
	std::cout << "Pony Name: ";
	std::cout << smallP->getPname() << std::endl;
	std::cout << "Pony Colour: ";
	std::cout << smallP->getPcolour() << std::endl;
	std::cout << "Pony Weight: ";
	std::cout << smallP->getPweight() << std::endl;
	delete smallP;
};

void Pony::ponyOnTheStack(){
	Pony bigP("MightyP", "Black", "9001");
	std::cout << "Creating a Pony on the Stack\n";
	std::cout << "Pony Name: ";
	std::cout << bigP.getPname() << std::endl;
	std::cout << "Pony Colour: ";
	std::cout << bigP.getPcolour() << std::endl;
	std::cout << "Pony Weight: ";
	std::cout << bigP.getPweight() << std::endl;
};