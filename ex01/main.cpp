#include "Fixed.hpp"

int main(void)
{
	int intValue = 5;
    Fixed a(intValue);

    // Acessar o valor em ponto fixo
    int rawValue = a.getRawBits();

    std::cout << "Valor em ponto fixo: " << rawValue << std::endl;

}