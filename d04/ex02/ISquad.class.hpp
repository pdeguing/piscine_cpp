/**
 * File              : ISquad.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef ISQUAD_CLASS_HPP
# define ISQUAD_CLASS_HPP

#include "ISpaceMarine.class.hpp"
#include <iostream>

class ISquad {

	public:

		virtual			~ISquad() {}
		virtual int		getCount() const = 0;
		virtual ISpaceMarine	*getUnit(int) const = 0;
		virtual int		push(ISpaceMarine *) = 0;
};

#endif // ISQUAD_CLASS_HPP
