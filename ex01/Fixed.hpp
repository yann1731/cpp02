#pragma once
#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	public:
	Fixed (void);
	Fixed (const int n);
	Fixed (const float n);
	Fixed (const Fixed& fixed);
	~Fixed (void);
	void setNumberValue (int n);
	int getNumberValue (void);
	void operator= (const Fixed& fixed);
	float toFloat (void) const;
	int toInt (void) const;

	private:
	int numberValue;
	static const int fractionalBits = 8;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);