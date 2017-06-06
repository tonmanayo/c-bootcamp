//
// Created by Tony MACK on 2017/06/02.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
template <typename T>
T easyfind(T temp, int i){
	int count = 0;
	T p;
	while (temp[count])
		count++;
	p = static_cast<T>(std::find(temp, temp+count, i));
	if (!p)
		throw (-1);
	return p;
}
#endif //EX00_EASYFIND_HPP
