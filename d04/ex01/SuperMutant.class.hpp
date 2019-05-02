/**
 * File              : SuperMutant.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef SUPERMUTANT_CLASS_HPP
# define SUPERMUTANT_CLASS_HPP

#include <iostream>
#include "Enemy.class.hpp"

class SuperMutant : public Enemy {

	public:

		SuperMutant(void);
		virtual	~SuperMutant(void);

		virtual void	takeDamage(int d);
};

#endif //SUPERMUTANT_CLASS_HPP
