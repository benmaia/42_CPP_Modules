#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>
#include <cmath>

typedef std::string	string;

class Fixed
{
	private:
		int					value;
		static const int	bits = 8;

	public:
		void	setRawBits(int const raw);
		int	getRawBits(void) const;
		float	toFloat(void) const;
		int	toInt(void) const;
		Fixed();
		Fixed(const Fixed &c);
		Fixed(const int);
		Fixed(const float);
		Fixed &operator=(const Fixed &c);

		~Fixed();
};

std::ostream &operator<< (std::ostream &stream, const Fixed &op);

#endif
