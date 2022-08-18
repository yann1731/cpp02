#include "Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << std::endl << "default constructor called" << std::endl;
	this->numberValue = 0;
};

Fixed::Fixed (const int n)
{
	std::cout << "int constructor called" << std::endl;
	this->numberValue = (n << this->fractionalBits);
};

Fixed::Fixed (const float n)
{
	std::cout << "float constructor called" << std::endl;
	this->numberValue = (n * (1 << fractionalBits));
};

Fixed::Fixed (const Fixed& fixed)
{
	std::cout << "copy constructor called" << std::endl;
	this->numberValue = fixed.numberValue;
};

Fixed::~Fixed (void)
{
	std::cout << "default destructor called" << std::endl;
}

void Fixed::setNumberValue (int n)
{
	this->numberValue = n;
}

int	Fixed::getNumberValue (void)
{
	return (numberValue);
}

void Fixed::operator= (const Fixed& fixed)
{
	this->numberValue = fixed.numberValue;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
};

float Fixed::toFloat (void) const
{
	return ((float) this->numberValue / (float)(1 << Fixed::fractionalBits));
}

int Fixed::toInt (void) const
{
	return ((int) this->numberValue >> fractionalBits);
}