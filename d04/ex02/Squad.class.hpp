/**
 * File              : Squad.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef SQUAD_CLASS_HPP
# define SQUAD_CLASS_HPP

#include "ISquad.class.hpp"
#include "ISpaceMarine.class.hpp"

class Squad : public ISquad {

	public:

		Squad();
		Squad(Squad const & src);
		~Squad();

		Squad &	operator=(Squad const &rhs);

		int		getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int		push(ISpaceMarine*);

	private:

		ISpaceMarine**	_units;
		int		_count;
};

#endif // SQUAD_CLASS_HPP
