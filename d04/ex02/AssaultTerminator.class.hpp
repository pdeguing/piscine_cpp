/**
 * File              : AssaultTerminator.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef ASSAULTTERMINATOR_CLASS_HPP
# define ASSAULTTERMINATOR_CLASS_HPP

#include <iostream>
#include "ISpaceMarine.class.hpp"

class AssaultTerminator : public ISpaceMarine {

	public:

		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & src);
		~AssaultTerminator(void);

		AssaultTerminator &	operator=(AssaultTerminator const &tmp);

		AssaultTerminator*	clone() const;

		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif // ASSAULTTERMINATOR_CLASS_HPP
