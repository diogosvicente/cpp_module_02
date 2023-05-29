#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(const Fixed & otherValue)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedValue = otherValue.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl; 
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixedValue = raw;
}

Fixed::Fixed(const int intValue) : _fixedValue(intValue << this->_fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) : _fixedValue(static_cast<int>(roundf(floatValue * (1 << this->_fractionalBits))))
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixedValue) / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedValue >> this->_fractionalBits);
}
