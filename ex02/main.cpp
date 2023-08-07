#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed a1(2.5f);
	Fixed b1(5.5f);

	if (a1 > b1)
		std::cout << "a1 é maior que b1" << std::endl;
	else
		std::cout << "a1 não é maior que b1" << std::endl;

	if (a1 == b1)
		std::cout << "a1 é igual a b1" << std::endl;
	else
		std::cout << "a1 não é igual a b1" << std::endl;

	Fixed sum = a1 + b1;
	Fixed diff = a1 - b1;
	Fixed prod = a1 * b1;
	Fixed div = a1 / b1;

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Difference: " << diff << std::endl;
	std::cout << "Product: " << prod << std::endl;
	std::cout << "Division: " << div << std::endl;

	Fixed d(2.5f);
    Fixed e(3.75f);
    Fixed f(1.25f);

    // Testar as funções min() e max()
    Fixed minResult = Fixed::min(d, e);
    Fixed maxResult = Fixed::max(d, e);

    std::cout << "min(d, e): " << minResult << std::endl; // Deve imprimir o menor valor entre d e e
    std::cout << "max(d, e): " << maxResult << std::endl; // Deve imprimir o maior valor entre d e e

    // Testar as funções min() e max() com referências constantes
    const Fixed& refD = d;
    const Fixed& refE = e;

    Fixed minResultRef = Fixed::min(refD, refE);
    Fixed maxResultRef = Fixed::max(refD, refE);

    std::cout << "min(refD, refE): " << minResultRef << std::endl; // Deve imprimir o menor valor entre refD e refE
    std::cout << "max(refD, refE): " << maxResultRef << std::endl; // Deve imprimir o maior valor entre refD e refE

	return 0;
}