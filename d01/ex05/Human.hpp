/**
 * File              : Human.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 08.04.2019
 * Last Modified Date: 08.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class	Human {
	private:
		Brain const	_brain;

	public:
		Human(void);
		~Human(void);

		const Brain	&getBrain(void) const;
		std::string	identify(void) const;
};

#endif
