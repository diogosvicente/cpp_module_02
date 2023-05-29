#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedValue(0)
{
	std::cout << GREEN << "Default constructor called with Fixed-point number value to 0." << RESET << std::endl; 
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called, the fixed-point number was copied." << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed & otherValue) {
        std::cout << "Copy assignment operator overload called" << std::endl;
        this->_fixedValue = otherValue.getRawBits();
        return (*this);
    }

Fixed::~Fixed(void)
{
	std::cout << RED << "Fixed object destroyed" << RESET << std::endl; 
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