//
// Created by Tony MACK on 2017/06/02.
//

#include <iostream>
#include "span.hpp"
#include <algorithm>

span::span(unsigned int iN) : _N(iN), _track(0){
	_arr = new int[iN];
}

void span::addnumber(int newNum) {
	if (_track < _N){
		_arr[_track] = newNum;
		_track++;
		}
 	else
		throw -1;
}

int *span::get_arr() const {
	return _arr;
}

int span::shortestSpan() {
	if (_track <= 1)
		throw (-2);
	std::sort(_arr, _arr+_N);
	int count = INT_MAX;
	for (int i = _N - 1; i >= 0; i--) {
		for (int j = 0; j < i; ++j) {
			if (_arr[i] - _arr[j] < count)
				count = _arr[i] - _arr[j];
		}
	}

	return count;
}

int span::longestSpan(){
	if (_track <= 1)
		throw (-2);
	std::sort(_arr, _arr+_N);

	int count = 0;
	count =  _arr[_N - 1] - _arr[0];
	return count;
}
