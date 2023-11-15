#include <iostream>
#include "ciencia.h"

int main() {
    double masa = 10.0;
    double energia = ciencia::fisica::calcularEnergia(masa);

    std::cout << "Energia: " << energia << std::endl;

    return 0;
}