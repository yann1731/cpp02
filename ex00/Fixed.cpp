#include "Fixed.hpp"

// class FixedPointNumber {
// 	public:
// 	FixedPointNumber (void);
// 	FixedPointNumber (const FixedPointNumber &fixedPointNumber);
// 	FixedPointNumber& operator= (const FixedPointNumber &fixedPointNumber);
// 	~FixedPointNumber (void);
// 	int	getRawBits (void) const;
// 	void setRawBits (int const raw);
	
// 	private:
// 	int numberValue;
// 	static const int fractionalBits;
// };

Fixed::Fixed()
{
	std::cout << "default constructor called" << std::endl;
	numberValue = 0;
};

Fixed::Fixed(const Fixed &fixedPointNumber)
{
	std::cout << "copy constructor called" << std::endl;
	numberValue = fixedPointNumber.numberValue;
};

void Fixed::operator= (const Fixed &fixedPointNumber)
{
	std::cout << "copy assignment operator called" << std::endl;
	numberValue = fixedPointNumber.numberValue;
};

Fixed::~Fixed()
{
	std::cout << "default destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (numberValue);
};

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	numberValue = raw;
};