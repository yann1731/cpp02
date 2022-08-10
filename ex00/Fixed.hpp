#pragma once
#include <iostream>

class Fixed {
	public:
	Fixed (void);
	Fixed (const Fixed &fixedPointNumber);
	void operator= (const Fixed &fixedPointNumber);
	~Fixed (void);
	int	getRawBits (void) const;
	void setRawBits (int const raw);
	
	private:
	int numberValue;
	static const int fractionalBits = 8;
};
