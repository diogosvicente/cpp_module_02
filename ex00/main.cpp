#include "Fixed.hpp"

int main(void)
{
	codeline("Fixed a");
	Fixed a;

	codeline("a.setRawBits(42)");
	a.setRawBits(42);

	codeline("Fixed b(a)");
	Fixed b(a);
	
	codeline("Fixed c");
	Fixed c;
	
	codeline("c = a");
	c = a;

	codeline("a.getRawBits()");
	std::cout << a.getRawBits() << std::endl;
	
	codeline("b.getRawBits()");
	std::cout << b.getRawBits() << std::endl;
	
	codeline("c.getRawBits()");
	std::cout << c.getRawBits() << std::endl;
    return (0);
}