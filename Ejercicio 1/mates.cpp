#include <iostream>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    int resultado_suma = Matematicas::suma(64, 42);
    int resultado_resta = Matematicas::resta(11, 95);

    std::cout << "El resultado de la suma: " << resultado_suma << std::endl;
    std::cout << "El resultado de la resta: " << resultado_resta << std::endl;
}


