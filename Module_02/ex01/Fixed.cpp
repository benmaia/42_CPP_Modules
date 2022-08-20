#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &c)
{
	this->value = c.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << Fixed::bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

Fixed &Fixed::operator=(Fixed const &c)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = c.value;
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &op)
{
	stream << op.toFloat();
	return (stream);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat (void) const
{
	return ((float) getRawBits() / (float)(1 << Fixed::bits));
}

int	Fixed::toInt (void) const
{
	return (this->getRawBits() >> Fixed::bits);
}
