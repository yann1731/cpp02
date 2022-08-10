#include "Fixed.hpp"

int main(void)
{
	Fixed number;
	Fixed number2;

	number.setRawBits(2);
	number2 = number;

	std::cout << number.getRawBits() << std::endl;
	std::cout << number2.getRawBits() << std::endl;
	
	return (0);
}