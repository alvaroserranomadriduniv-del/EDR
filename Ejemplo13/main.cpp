#include "Persona.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Inicializar semilla para la generación aleatoria
    srand(time(NULL));

    // Array de punteros para almacenar 10 objetos Persona
    Persona* personas[10];

    // Bucle para crear 10 personas con distintas edades entre 18 y 27 inclusive[cite: 1]
    // Como las edades van del 18 al 27 hay exactamente 10 valores distintos,
    // garantizando que dos personas no tengan la misma edad[cite: 1].
    int edad_actual = 18;
    for(int i = 0; i < 10; i++) {
        personas[i] = new Persona(edad_actual);
        edad_actual++;
    }

    // Mostrar la información de cada persona
    cout << "--- LISTA DE PERSONAS ---" << endl;
    for(int i = 0; i < 10; i++) {
        personas[i]->mostrar();
    }

    // Liberar memoria (llamando al destructor)
    for(int i = 0; i < 10; i++) {
        delete personas[i];
    }

    return 0;
}