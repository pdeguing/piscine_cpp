/**
 * File              : PlasmaRifle.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef PLASMARIFLE_CLASS_HPP
# define PLASMARIFLE_CLASS_HPP

class PlasmaRifle : public AWeapon {

	public:

		PlasmaRifle(void);
		virtual	~PlasmaRifle(void);

		void	attack(void) const;
};

#endif //PLASMARIFLE_CLASS_HPP
