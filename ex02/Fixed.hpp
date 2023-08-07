#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define RED	"\033[31m"
# define ULINE	"\033[4m"
# define RESET	"\033[0m"
# define GREEN	"\033[32m"
# define YELLOW	"\033[33m"
# define BOLD	"\033[1m"
# define ITALIC	"\033[3m"

class	Fixed
{
	private:
		int					_fixedPoint;
		static int const	_fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed &operator=(Fixed const &copy);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed(const int intValue);
		Fixed(const float floatValue);
		int		toInt(void) const;
		float	toFloat(void) const;

		// Overloaded operators
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed& operator++();       // Pre-increment
		Fixed operator++(int);     // Post-increment
		Fixed& operator--();       // Pre-decrement
		Fixed operator--(int);     // Post-decrement

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif