#include "triangulo.h"
#ifdef COMPILAR_TRIANGULO

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return (base * altura) / 2.0;
    }
}
#endif