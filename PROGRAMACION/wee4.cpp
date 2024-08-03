#include <iostream>
#include <string>

int main() {
    const int NUM_ESTUDIANTES = 10;

    std::string nombres[NUM_ESTUDIANTES];
    float notasCorte1[NUM_ESTUDIANTES], notasCorte2[NUM_ESTUDIANTES], notasCorte3[NUM_ESTUDIANTES];
    float notasFinales[NUM_ESTUDIANTES];

    // Solicitar al usuario que ingrese los datos
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        std::cout << "Ingrese el nombre del estudiante " << (i + 1) << ": ";
        std::cin >> nombres[i];
        std::cout << "Ingrese las notas de los tres cortes para " << nombres[i] << ": ";
        std::cin >> notasCorte1[i] >> notasCorte2[i] >> notasCorte3[i];

        // Calcular la nota final como promedio de las tres notas
        notasFinales[i] = (notasCorte1[i] + notasCorte2[i] + notasCorte3[i]) / 3.0;
    }

    // Mostrar la información en forma de tabla
    std::cout << "\nInformación de los estudiantes:\n";
    std::cout << "Estudiante\tNota 1er Corte\tNota 2do Corte\tNota 3er Corte\tNota Final\n";
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        std::cout << nombres[i] << "\t" << notasCorte1[i] << "\t\t" << notasCorte2[i]
                  << "\t\t" << notasCorte3[i] << "\t\t" << notasFinales[i] << "\n";
    }

    return 0;
}
