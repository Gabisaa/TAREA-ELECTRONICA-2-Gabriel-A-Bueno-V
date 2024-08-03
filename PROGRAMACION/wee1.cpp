#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    srand(time(0)); // Semilla para la generaci�n de n�meros aleatorios

    int numeros[20]; // Array para almacenar los 20 n�meros aleatorios
    int primos[20];  // Array para almacenar los n�meros primos encontrados
    int contadorPrimos = 0; // Contador para llevar la cuenta de cu�ntos n�meros primos hay

    // Generar y almacenar 20 n�meros aleatorios entre 0 y 99
    for (int i = 0; i < 20; ++i) {
        numeros[i] = rand() % 100; // Genera un n�mero aleatorio entre 0 y 99
    }

    // Filtrar y almacenar los n�meros primos
    for (int i = 0; i < 20; ++i) {
        if (esPrimo(numeros[i])) {
            primos[contadorPrimos++] = numeros[i];
        }
    }

    // Mostrar los 20 n�meros aleatorios
    std::cout << "N�meros aleatorios entre 0 y 99:" << std::endl;
    for (int i = 0; i < 20; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    // Mostrar los n�meros primos encontrados
    std::cout << "N�meros primos encontrados:" << std::endl;
    for (int i = 0; i < contadorPrimos; ++i) {
        std::cout << primos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
