/**
 * File              : FragTrap.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 11.04.2019
 * Last Modified Date: 11.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	return ;
}

FragTrap::FragTrap( const FragTrap& other ) {

}

FragTrap::~FragTrap( void) {
	return ;
}

FragTrap&	operator=( FragTrap tmp ) {
	std::swap( element, tmp.element );
	return *this;
}
