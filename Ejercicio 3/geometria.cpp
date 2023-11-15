#include <iostream>
#include "geometria.h"

using namespace std;

namespace geometria {
    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() {
        return 3.14159265358979323846 * radio * radio;
    }
    double Circulo::calcularPerimetro() {
        return 2 * 3.14159265358979323846 * radio;
    }
}