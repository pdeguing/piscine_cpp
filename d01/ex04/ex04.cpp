/**
 * File              : ex04.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include <string>
#include <iostream>

int	main(void) {
	std::string	wtf = "HI THIS IS BRAIN";
	std::string	*ptr = &wtf;
	std::string	&ref = wtf;

	std::cout << "Ptr = " << *ptr << std::endl;
	std::cout << "Ref = " << ref << std::endl;

	return 0;
}
