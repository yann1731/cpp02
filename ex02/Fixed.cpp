#include "Fixed.hpp"

Fixed::Fixed ()
{
	this->numberValue = 0;
};

Fixed::Fixed (const int n)
{
	this->numberValue = (n << this->fractionalBits);
};

Fixed::Fixed (const float n)
{
	this->numberValue = (n * (1 << fractionalBits));
};

Fixed::Fixed (const Fixed& fixed)
{
	this->numberValue = fixed.numberValue;
};

Fixed::~Fixed (void)
{
};

Fixed& Fixed::max (Fixed& fixedOne, Fixed& fixedTwo)
{
	if (fixedOne > fixedTwo)
		return (fixedOne);
	else
		return (fixedTwo);
};

Fixed& Fixed::max (const Fixed& fixedOne, const Fixed& fixedTwo)
{
	if ((Fixed&) fixedOne > (Fixed&) fixedTwo)
		return ((Fixed&) fixedOne);
	else
		return ((Fixed&) fixedTwo);
};

Fixed& Fixed::min (Fixed& fixedOne, Fixed& fixedTwo)
{
	if (fixedOne < fixedTwo)
		return (fixedOne);
	else
		return (fixedTwo);
};

Fixed& Fixed::min (const Fixed& fixedOne, const Fixed& fixedTwo)
{
	if ((Fixed&) fixedOne < (Fixed&) fixedTwo)
		return ((Fixed&) fixedOne);
	else
		return ((Fixed&) fixedTwo);
};

void Fixed::setNumberValue (int n)
{
	this->numberValue = n;
};

int	Fixed::getNumberValue (void)
{
	return (this->numberValue);
};

void Fixed::operator= (const Fixed& fixed)
{
	this->numberValue = fixed.numberValue;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
};

bool Fixed::operator> (const Fixed& fixed)
{
	return (this->toFloat() > fixed.toFloat());
};

bool Fixed::operator< (const Fixed& fixed)
{
	return (this->toFloat() < fixed.toFloat());
};

bool Fixed::operator>= (const Fixed& fixed)
{
	return (this->toFloat() >= fixed.toFloat());
};

bool Fixed::operator<= (const Fixed& fixed)
{
	return (this->toFloat() <= fixed.toFloat());
};

Fixed Fixed::operator+ (const Fixed& fixed)
{
	Fixed returnFixed(this->toFloat() + fixed.toFloat());
	return (returnFixed);
};

Fixed Fixed::operator- (const Fixed& fixed)
{
	Fixed returnFixed(this->toFloat() - fixed.toFloat());
	return (returnFixed);
};

Fixed Fixed::operator* (const Fixed& fixed)
{
	Fixed returnFixed(this->toFloat() * fixed.toFloat());
	return (returnFixed);
};

Fixed Fixed::operator/ (const Fixed& fixed)
{
	Fixed returnFixed(this->toFloat() / fixed.toFloat());
	return (returnFixed);
};

bool Fixed::operator== (const Fixed& fixed)
{
	return (this->toFloat() == this->toFloat());
};

bool Fixed::operator!= (const Fixed& fixed)
{
	return (this->toFloat() != fixed.toFloat());
};

Fixed Fixed::operator++ ()
{
	this->numberValue++;
	return (*this);
};

Fixed Fixed::operator++ (int)
{
	Fixed tmp(*this);
	this->numberValue++;
	return (tmp);
};

Fixed Fixed::operator-- ()
{
	this->numberValue--;
	return (*this);
};

Fixed Fixed::operator-- (int)
{
	Fixed tmp(*this);
	this->numberValue--;
	return (tmp);
};

float Fixed::toFloat (void) const
{
	return ((float) this->numberValue / (float)(1 << Fixed::fractionalBits));
};

int Fixed::toInt (void) const
{
	return ((int) this->numberValue >> fractionalBits);
};