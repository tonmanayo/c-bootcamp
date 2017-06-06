#include <iostream>

void    ft_print(int *arr) {

		std::cout << arr[0] << std::endl;
}

void    ft_print_c(std::string *arr) {

		std::cout << arr[0] << std::endl;
}

template <typename T, typename  U>
void iter(T *array, size_t len, U func(T *arr)){

	for (unsigned int i = 0; i < len; ++i) {
		func(&array[i]);
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	std::string carr[] = {"Tony", "Mack"};
	iter<int, void>(arr, 5, &ft_print);
	std::cout << "using a char array\n";
	iter<std::string, void>(carr, 2, &ft_print_c);

	return 0;
}