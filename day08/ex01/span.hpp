//
// Created by Tony MACK on 2017/06/02.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP


class span {
private:
	int *_arr;
	unsigned const int _N;
	unsigned int _track;
public:
	int *get_arr() const;
	span(unsigned int );
	void addnumber(int );
	int shortestSpan();
	int longestSpan();
};


#endif //EX01_SPAN_HPP
