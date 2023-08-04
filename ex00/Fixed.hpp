#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define RED	"\033[31m"
# define ULINE	"\033[4m"
# define RESET	"\033[0m"
# define GREEN	"\033[32m"
# define YELLOW	"\033[33m"
# define BOLD	"\033[1m"
# define ITALIC	"\033[3m"

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
		/* 3 */ Fixed &operator=(Fixed const &otherValue);
		/* 4 */ ~Fixed(void);
		/* 5 */	int		getRawBits(void) const;
		/* 6 */	void	setRawBits(int const raw);
};

void	codeline(std::string s);

#endif