#include "Fixed.hpp"

//const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	//this->_fixedPoint = otherValue.getRawBits();
	this->_fixedPoint = copy._fixedPoint;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl; 
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	//return (this->_fixedPoint);
	return _fixedPoint;
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	//this->_fixedPoint = raw;
	_fixedPoint = raw;
}

//Fixed::Fixed(const int intValue) : _fixedPoint(intValue << this->_fractionalBits)
Fixed::Fixed(const int intValue) : _fixedPoint(static_cast<int>(intValue * (1 << _fractionalBits)))
{
	std::cout << "Int constructor called" << std::endl;
}

//Fixed::Fixed(const float floatValue) : _fixedPoint(static_cast<int>(roundf(floatValue * (1 << this->_fractionalBits))))
Fixed::Fixed(const float floatValue) : _fixedPoint(static_cast<int>(roundf(floatValue * (1 << _fractionalBits))))
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	//return (static_cast<float>(this->_fixedPoint) / (1 << this->_fractionalBits));
	return (static_cast<float>(_fixedPoint) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	//return (this->_fixedPoint >> this->_fractionalBits);
	return (_fixedPoint >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &out , const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}