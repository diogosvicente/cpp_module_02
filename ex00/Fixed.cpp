#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedValue(0)
{
	std::cout << "(1)	Default constructor: " << this->_fixedValue << RESET << std::endl; 
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "(2)	Copy constructor: " << copy._fixedValue << std::endl;
	*this = copy;
}

// Fixed &Fixed::operator=(const Fixed &otherValue)
// {
// 	std::cout << "(3)	Copy assignment operator overload";
// 	std::cout << " from: " << this->_fixedValue << std::endl;
// 	this->_fixedValue = otherValue.getRawBits();
// 	std::cout << "(3)	to: " << this->_fixedValue << std::endl;
// 	return (*this);
// }

Fixed & Fixed::operator=(const Fixed & otherValue)
{
	if (this != &otherValue) {
		if (this->_fixedValue != otherValue.getRawBits()) {
			std::cout << "(3)	Copy assignment operator overload";
			std::cout << " from: " << this->_fixedValue << std::endl;
			this->_fixedValue = otherValue.getRawBits();
			std::cout << "(3)	to: " << this->_fixedValue << std::endl;
		}
		else
		{
			std::cout << "(3)	Copy assignment operator overload:" << std::endl;
			std::cout << "(3)	Value is the same. No assignment needed." << std::endl;
		}
	}
	return (*this);
}



Fixed::~Fixed(void)
{
	std::cout << RED << "(4)	Destructor called" << RESET << std::endl; 
}

int	Fixed::getRawBits(void) const
{
	std::cout << "(5)	getRawBits member function called: " << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "(6)	Setting the value: " << raw << std::endl;
	this->_fixedValue = raw;
}

void	codeline(std::string str)
{
	//std::cout << RED << std::endl << "-------------------------" << std::endl;
	std::cout << RED << " *****   Codeline: " << \
	str << "   *****" << RESET << std::endl;
	//std::cout << RED << "-------------------------" << RESET << std::endl;
}