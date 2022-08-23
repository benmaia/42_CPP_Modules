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
		float	toFloat(void)const;
		int	toInt(void)const;
		Fixed	static min(Fixed &a, Fixed &b);
		Fixed	static min(const Fixed &a, const Fixed &b);
		Fixed	static max(Fixed &a, Fixed &b);
		Fixed	static max(const Fixed &a, const Fixed &b);
		Fixed();
		Fixed(const Fixed &original);
		Fixed(const int	interNb);
		Fixed(const float	fractNb);
		Fixed &operator=(const Fixed &original);
		bool	operator<(const Fixed &original);
		bool	operator>(const Fixed &original);
		bool	operator<=(const Fixed &original);
		bool	operator>=(const Fixed &original);
		bool	operator==(const Fixed &original);
		bool	operator!=(const Fixed &original);
		Fixed operator+(const Fixed &original);
		Fixed operator-(const Fixed &original);
		Fixed operator*(const Fixed &original);
		Fixed operator/(const Fixed &original);
		Fixed operator++(int);
		Fixed	&operator++();
		Fixed	operator--(int);
		Fixed	&operator--();
		~Fixed();
};

std::ostream &operator<<(std::ostream &op, const Fixed &original);

#endif
