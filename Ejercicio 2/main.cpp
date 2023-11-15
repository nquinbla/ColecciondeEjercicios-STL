#include <iostream>
#include "triangulo.h"
#include "circulo.h"

using namespace std;

int main() {
    double base = 5.0;
    double altura = 3.0;
    double radio = 2.5;

#ifdef COMPILAR_TRIANGULO
    double areaTriangulo = Geometria::calcularAreaTriangulo(base, altura);
    cout << "El área del triángulo es: " << areaTriangulo << endl;
#endif

#ifdef COMPILAR_CIRCULO
    double areaCirculo = Geometria::calcularAreaCirculo(radio);
    cout << "El área del círculo es: " << areaCirculo << endl;
#endif

    return 0;
}