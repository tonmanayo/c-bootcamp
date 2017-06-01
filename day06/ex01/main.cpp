#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <climits>
#include <sstream>


struct Data { std::string s1;
	int n; std::string s2; };
static const char alphanum[] = "0123456789!@#$%^&*ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int stringLength = sizeof(alphanum) - 1;
char genRandom()
{

	return alphanum[rand() % stringLength];
}

void *serialize(){
	Data *data =  new Data;

	for(unsigned int i = 0; i < 20; ++i) {
		data->s1 += genRandom();
		data->s2 += genRandom();
	}
	data->n = rand() % INT_MAX;
	std::string temp;
	std::stringstream ss;
	ss << data->n;
	std::string myString = ss.str();
	std::string newStr = data->s1 + myString + data->s2;
	std::cout << newStr << std::endl;

	return (reinterpret_cast<Data *>(data));
}

Data * deserialize( void * raw ){

	return reinterpret_cast<Data *>(raw);
}

int main() {
	srand(time(NULL));
	Data *data = reinterpret_cast<Data *>(serialize());
	std::cout << data->s2 << std::endl;
	deserialize(data);
	std::cout << data->s2 << std::endl;
	return 0;
}