/**
 * File              : megaphone.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 06.04.2019
 * Last Modified Date: 06.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */
#include <iostream>
#include <cctype>

int	main(int ac, char **av) {
	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < ac; i++) {
		for (int j = 0; av[i][j]; j++) {
			std::cout << (char)std::toupper(av[i][j]);
		}
	}
	std::cout << std::endl;
	return 0;
}
