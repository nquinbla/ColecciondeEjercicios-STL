#include <iostream>
#include "geometria.h"

using namespace std;

int main() {
    geometria::Circulo miCirculo(5.0);
    double area = miCirculo.calcularArea();
    double perimetro = miCirculo.calcularPerimetro();

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}