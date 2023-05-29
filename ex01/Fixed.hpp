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
		int					_fixedValue;
		static const int	_fractionalBits ;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &otherValue);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed(const int intValue);
		Fixed(const float floatValue);
		int		toInt(void) const;
		float	toFloat(void) const;
};

#endif