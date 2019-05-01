/**
 * File              : Peon.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 01.05.2019
 * Last Modified Date: 01.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

#include <iostream>
#include "Victim.class.hpp"

class Peon : public Victim {

	public:

		Peon(std::string const name);
		Peon(Peon const & other);
		virtual ~Peon(void);

		void	getPolymorphed(void) const;
};

#endif
