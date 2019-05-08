#include <iostream>

template<typename T, typename U>
void	iter(T* arr, unsigned int size, U (*f) (T const &)) {
	for (unsigned int i = 0; i < size; i++) {
		f(arr[i]);
	}
}

void	foo(int const & i) {
	std::cout
		<< i + 1 << " ";
}

int main () {
	int arr[42];

	for (int i = 0; i < 42; i++)
		arr[i] = i;

	iter(arr, 42, foo);
	std::cout << std::endl;

	iter<int, void>(arr, 42, foo);
	std::cout << std::endl;

	return 0;
}
