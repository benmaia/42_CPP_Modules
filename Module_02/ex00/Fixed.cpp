#include "Fixed.hpp"

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

Fixed	&Fixed::operator=(const Fixed &original)
{
	this->value = original.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
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
