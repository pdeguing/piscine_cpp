/**
 * File              : TacticalMarine.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef TACTICALMARINE_CLASS_HPP
# define TACTICALMARINE_CLASS_HPP

#include <iostream>
#include "ISpaceMarine.class.hpp"

class TacticalMarine : public ISpaceMarine {

	public:

		TacticalMarine();
		TacticalMarine(TacticalMarine const & src);
		~TacticalMarine(void);

		TacticalMarine &	operator=(TacticalMarine const &rhs);

		TacticalMarine*		clone() const;
		
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif // TACTICALMARINE_CLASS_HPP
