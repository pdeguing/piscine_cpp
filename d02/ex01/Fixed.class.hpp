/**
 * File              : Fixed.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 09.04.2019
 * Last Modified Date: 09.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <math.h>

class	Fixed {

public:

	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed(void);

	Fixed &			operator=(Fixed const & rhs);

	int			getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int			toInt(void) const;

private:

	int			_value;
	static const int	_fractional_bits;
};

std::ostream &			operator<<(std::ostream & o, Fixed const & f);

#endif
