#include "Fixed.hpp"

int main(void)
{
    Fixed teste(5);

    std::cout << "teste: " << teste << std::endl;

    // Acessar o valor em ponto fixo
    int rawValue = teste.getRawBits();
    std::cout << "Valor em ponto fixo: " << rawValue << std::endl;

    //there's a overload operator to <<
    Fixed fixedNumber(5.25f);
    std::cout << "Valor de fixedNumber: " << fixedNumber << std::endl;

    //int conversor
    int intValue = fixedNumber.toInt();
    std::cout << "Valor inteiro de fixedNumber: " << intValue << std::endl;

    //float conversor
    float floatValue = fixedNumber.toFloat();
    std::cout << "Valor de ponto flutuante de fixedNumber: " << floatValue << std::endl;

    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;

}