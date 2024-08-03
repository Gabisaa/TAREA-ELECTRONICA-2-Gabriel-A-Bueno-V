#include <iostream>

int main() {
    int numeros[10]; // Array para almacenar los 10 números enteros
    int sumaPositivos = 0, conteoPositivos = 0;
    int sumaNegativos = 0, conteoNegativos = 0;

    // Leer 10 números enteros del usuario
    std::cout << "Ingrese 10 números enteros:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> numeros[i];
        
        // Sumar y contar los valores positivos y negativos
        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
            conteoPositivos++;
        } else if (numeros[i] < 0) {
            sumaNegativos += numeros[i];
            conteoNegativos++;
        }
    }

    // Calcular y mostrar la media de los valores positivos
    double mediaPositivos = (conteoPositivos > 0) ? static_cast<double>(sumaPositivos) / conteoPositivos : 0;
    std::cout << "Media de los valores positivos: " << mediaPositivos << std::endl;

    // Calcular y mostrar la media de los valores negativos
    double mediaNegativos = (conteoNegativos > 0) ? static_cast<double>(sumaNegativos) / conteoNegativos : 0;
    std::cout << "Media de los valores negativos: " << mediaNegativos << std::endl;

    return 0;
}
