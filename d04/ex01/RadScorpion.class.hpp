/**
 * File              : RadScorpion.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 02.05.2019
 * Last Modified Date: 02.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef RADSCORPION_CLASS_HPP
# define RADSCORPION_CLASS_HPP

#include <iostream>
#include "Enemy.class.hpp"

class RadScorpion : public Enemy {

	public:

		RadScorpion(void);
		virtual	~RadScorpion(void);
};

#endif //RADSCORPION_CLASS_HPP
