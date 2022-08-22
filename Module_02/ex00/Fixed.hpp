#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		static const int	bits = 8;
		int					value;

	public:
		int	getRawBits(void)const;
		void	setRawBits(const int raw);
		Fixed();
		Fixed(const Fixed &original);
		Fixed &operator=(const Fixed &original);
		~Fixed();
};

#endif
