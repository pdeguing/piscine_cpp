/**
 * File              : FragTrap.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class	FragTrap {
	public:
		FragTrap( void );
		FragTrap( const FragTrap& other );
		~FragTrap( void );

		FragTrap&	operator=( FragTrap tmp );

	private:
};

#endif
