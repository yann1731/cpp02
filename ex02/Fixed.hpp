#include <iostream>
#include <cmath>

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
	static Fixed& max(Fixed& fixedOne, Fixed& fixedTwo);
	static Fixed& max(const Fixed& fixedOne, const Fixed& fixedTwo);
	static Fixed& min(Fixed& fixedOne, Fixed& fixedTwo);
	static Fixed& min(const Fixed& fixedOne, const Fixed& fixedTwo);
	void setNumberValue (int n);
	int getNumberValue (void);
	void operator= (const Fixed& fixed);
	void operator> (const Fixed& fixed);
	void operator< (const Fixed& fixed);
	void operator>= (const Fixed& fixed);
	void operator<= (const Fixed& fixed);
	void operator== (const Fixed& fixed);
	void operator!= (const Fixed& fixed);
	void operator+ (const Fixed& fixed);
	void operator- (const Fixed& fixed);
	void operator* (const Fixed& fixed);
	void operator/ (const Fixed& fixed);
	void operator++ ();
	void operator++ (int);
	void operator-- ();
	void operator-- (int);
	float toFloat (void) const;
	int toInt (void) const;

	private:
	int numberValue;
	static const int fractionalBits = 8;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);