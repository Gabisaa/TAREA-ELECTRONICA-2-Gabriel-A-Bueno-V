#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    srand(time(0)); // Semilla para la generación de números aleatorios

    int numeros[20]; // Array para almacenar los 20 números aleatorios
    int primos[20];  // Array para almacenar los números primos encontrados
    int contadorPrimos = 0; // Contador para llevar la cuenta de cuántos números primos hay

    // Generar y almacenar 20 números aleatorios entre 0 y 99
    for (int i = 0; i < 20; ++i) {
        numeros[i] = rand() % 100; // Genera un número aleatorio entre 0 y 99
    }

    // Filtrar y almacenar los números primos
    for (int i = 0; i < 20; ++i) {
        if (esPrimo(numeros[i])) {
            primos[contadorPrimos++] = numeros[i];
        }
    }

    // Mostrar los 20 números aleatorios
    std::cout << "Números aleatorios entre 0 y 99:" << std::endl;
    for (int i = 0; i < 20; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    // Mostrar los números primos encontrados
    std::cout << "Números primos encontrados:" << std::endl;
    for (int i = 0; i < contadorPrimos; ++i) {
        std::cout << primos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
