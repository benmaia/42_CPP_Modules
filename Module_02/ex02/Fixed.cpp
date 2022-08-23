#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const Fixed &original)
{
	this->value = original.value;
}

Fixed::Fixed(const int interNb)
{
	this->value = interNb * (1 << Fixed::bits);
}

Fixed::Fixed(const float fractNb)
{
	this->value = roundf(fractNb * (1 << Fixed::bits));
}

Fixed	&Fixed::operator=(const Fixed &original)
{
	this->value = original.value;
	return (*this);
}

bool	Fixed::operator<(const Fixed &original)
{
	if (this->value < original.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &original)
{
	if (this->value > original.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &original)
{
	if (this->value <= original.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &original)
{
	if (this->value >= original.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &original)
{
	if (this->value == original.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &original)
{
	if (this->value != original.getRawBits())
		return (true);
	return (false);
}

std::ostream &operator<<(std::ostream &op, const Fixed &original)
{
	op << original.toFloat();
	return (op);
}

Fixed	Fixed::operator+(const Fixed &original)
{
	Fixed n((this->toFloat() + original.toFloat()));
	return(n);
}

Fixed	Fixed::operator-(const Fixed &original)
{
	Fixed n((this->toFloat() - original.toFloat()));
	return(n);
}

Fixed	Fixed::operator*(const Fixed &original)
{
	Fixed n((this->toFloat() * original.toFloat()));
	return(n);
}

Fixed	Fixed::operator/(const Fixed &original)
{
	Fixed n((this->toFloat() / original.toFloat()));
	return(n);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(this->value * toFloat());
	this->value++;
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	this->value += 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(this->value * toFloat());
	this->value--;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}

Fixed::~Fixed(){}

int	Fixed::getRawBits(void)const
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void)const
{
	return ((float)this->value / (1 << Fixed::bits));
}

int	Fixed::toInt(void)const
{
	return ((this->value  >> Fixed::bits));
}

Fixed	Fixed::min(Fixed &a, Fixed&b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed &)a < (Fixed &)b)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed&b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed &)a > (Fixed &)b)
		return (a);
	return (b);
}
