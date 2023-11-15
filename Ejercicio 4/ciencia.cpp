#include <iostream>
#include "ciencia.h"

using namespace std;

namespace ciencia {
    namespace fisica {
        const double velocidadLuz = 299792458.0;

        double calcularEnergia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
    }
}
