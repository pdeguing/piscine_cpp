/**
 * File              : PowerFist.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef POWERFIST_CLASS_HPP
# define POWERFIST_CLASS_HPP

class PowerFist : public AWeapon {

	public:

		PowerFist(void);
		virtual	~PowerFist(void);

		void	attack(void) const;

};

#endif //POWERFIST_CLASS_HPP
