#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

int main() {
    srand(static_cast<unsigned>(time(0))); // Semilla para la generación de números aleatorios

    const int filas = 4;
    const int columnas = 5;
    int numeros[filas][columnas]; // Array de 4x5

    // Generar y almacenar 20 números aleatorios entre 0 y 9
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            numeros[i][j] = rand() % 10; // Genera un número aleatorio entre 0 y 9
        }
    }

    // Mostrar el array
    std::cout << "Array de 4x5 con números aleatorios entre 0 y 9:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << numeros[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
