//
// Created by Tony MACK on 2017/06/01.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <cstdio>
#include <exception>

template <typename T>
class Array {

private:
	unsigned int _size;
	T *_array;
public:
	Array<T>() {
		_array = NULL;
	}
	Array<T>(unsigned int n): _size(n){
		_array = new T [n];
	}
	Array(Array &cpy){
		*this = cpy;
	}

	virtual ~Array(){}

	Array &operator=(Array const &rhs){
		_size = rhs._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = rhs._array[i];
		}
		return *this;
	}

	T &operator[](unsigned int i){

			if (i > (_size - 1))
				throw std::exception();
			return _array[i];

	}

	unsigned int size(){
		return _size;
	}
};


#endif //EX02_ARRAY_HPP
