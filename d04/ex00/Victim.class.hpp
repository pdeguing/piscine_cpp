/**
 * File              : Victim.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

#include <iostream>

class Victim {

	public:

		Victim(Victim const & other);
		Victim(std::string const name);
		~Victim(void);

		Victim &	operator=(Victim const & tmp);

		void		getPolymorphed(void) const;

		std::string	getName(void) const;


	private:

		Victim(void);

		std::string	_name;
};

std::ostream &	operator<<(std::ostream & ofs, Victim const & v);

#endif
