#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>

typedef std::string	string;

class Fixed
{
	private:
		int					value;
		static const int	bits = 8;

	public:
		void	setRawBits(int const raw);
		int	getRawBits(void) const;
		Fixed();
		Fixed(const Fixed &c);
		Fixed &operator=(const Fixed &c);
		~Fixed();
};

#endif
