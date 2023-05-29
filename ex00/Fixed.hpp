#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

const std::string RED    = "\033[31m";
const std::string ULINE  = "\033[4m";
const std::string RESET  = "\033[0m";
const std::string GREEN  = "\033[32m";
const std::string BOLD	 = "\033[1m";
const std::string ITALIC = "\033[3m";

/**
 *	Orthodox Canonical Form Class
 *	1. A default constructor that initializes the fixed-point number value to 0.
 *	2. A copy constructor.
 *	3. A copy assignment operator overload.
 *	4. A destructor.
 *
 *  ------------------------------
 * 
 *	A member function int getRawBits( void ) const; that returns the raw value of the fixed-point value.
 *	A member function void setRawBits( int const raw ); that sets the raw value of the fixed-point numbe
 */

class	Fixed
{
	private:
		int					_fixedValue;
		static const int	_fractionalBits ;
	public:
		/* 1 */ Fixed(void);
		/* 2 */ Fixed(Fixed const &copy);
		/* 3 */ Fixed &operator=(Fixed const &copy);
		/* 4 */ ~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif


