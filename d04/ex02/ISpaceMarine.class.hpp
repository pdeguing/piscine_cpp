/**
 * File              : ISpaceMarine.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 04.05.2019
 * Last Modified Date: 04.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef ISPACEMARINE_CLASS_HPP
# define ISPACEMARINE_CLASS_HPP

class ISpaceMarine {

	public:

		virtual	~ISpaceMarine(void) {}

		virtual ISpaceMarine*	clone() const = 0;
		virtual void		battleCry() const = 0;
		virtual void		rangedAttack() const = 0;
		virtual void		meleeAttack() const = 0;
};

#endif // ISPACEMARINE_CLASS_HPP
