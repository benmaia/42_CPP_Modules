#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
	this->value = original.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int interNb)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = interNb * (1 << Fixed::bits);
}

Fixed::Fixed(const float fractNb)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(fractNb * (1 << Fixed::bits));
}

Fixed	&Fixed::operator=(const Fixed &original)
{
	this->value = original.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &op, const Fixed &original)
{
	op << original.toFloat();
	return (op);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
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
