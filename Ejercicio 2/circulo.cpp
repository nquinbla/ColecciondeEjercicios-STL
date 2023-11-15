#include "circulo.h"
#ifdef COMPILAR_CIRCULO

namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return 3.14159265358979323846 * radio * radio;
    }
}
#endif