#include <iostream>

template<typename T>
void	swap(T & a, T & b) {
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &	min(T const & a, T const & b) {
	return a > b ? b : a;
}

template<typename T>
T const &	max(T const & a, T const & b) {
	return a >= b ? a : b;
}

int main() {

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	/*
	int i1 = 42;
	int i2 = 21;
	float f1 = 42.42;
	float f2 = 21.21;
	char c1 = 'X';
	char c2 = 'Y';

	std::cout << "int 1: " << i1 << ";  int 2: " << i2 << std::endl;
	swap<int>(i1, i2);
	std::cout << "swap: " << i1 << ";  " << i2 << std::endl;
	std::cout << "min: " << min<int>(i1, i2) << std::endl;
	std::cout << "max: " << max<int>(i1, i2) << std::endl;
	std::cout << std::endl;

	std::cout << "float 1: " << f1 << ";  float 2: " << f2 << std::endl;
	swap<float>(f1, f2);
	std::cout << "swap: " << f1 << ";  " << f2 << std::endl;
	std::cout << "min: " << min<float>(f1, f2) << std::endl;
	std::cout << "max: " << max<float>(f1, f2) << std::endl;
	std::cout << std::endl;

	std::cout << "char 1: " << c1 << ";  char 2: " << c2 << std::endl;
	swap<char>(c1, c2);
	std::cout << "swap: " << c1 << ";  " << c2 << std::endl;
	std::cout << "min: " << min<char>(c1, c2) << std::endl;
	std::cout << "max: " << max<char>(c1, c2) << std::endl;
	*/

	return 0;
}
