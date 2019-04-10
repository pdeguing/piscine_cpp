/**
 * File              : main.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 09.04.2019
 * Last Modified Date: 09.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Fixed.class.hpp"
#include <iostream>

int		main(void) {

	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}
