#include "Fixed.hpp"

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
	return _fixedPoint;
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
}

Fixed::Fixed(const int intValue) : _fixedPoint(static_cast<int>(intValue * (1 << _fractionalBits)))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) : _fixedPoint(static_cast<int>(roundf(floatValue * (1 << _fractionalBits))))
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixedPoint) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	return (_fixedPoint >> _fractionalBits);
}

bool Fixed::operator>(const Fixed& other) const
{
    return _fixedPoint > other._fixedPoint;
}

bool Fixed::operator<(const Fixed& other) const
{
    return _fixedPoint < other._fixedPoint;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return _fixedPoint >= other._fixedPoint;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return _fixedPoint <= other._fixedPoint;
}

bool Fixed::operator==(const Fixed& other) const
{
    return _fixedPoint == other._fixedPoint;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return _fixedPoint != other._fixedPoint;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    if (other.toFloat() == 0)
    {
        std::cout << "Error: Division by zero!" << std::endl;
        return Fixed();
    }
    return Fixed(toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
    _fixedPoint++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    _fixedPoint++;
    return temp;
}

Fixed& Fixed::operator--()
{
    _fixedPoint--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    _fixedPoint--;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return a > b ? a : b;
}

std::ostream &operator<<(std::ostream &out , const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}