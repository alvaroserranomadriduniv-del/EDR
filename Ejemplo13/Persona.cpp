#include "Persona.hpp"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

// El constructor recibe la edad como parámetro
Persona::Persona(int e) {
    edad = e;
    generarGenero(); // Se establece de forma automática[cite: 1]
    generarDNI();    // Se establece de forma automática[cite: 1]
}

Persona::~Persona() {
}

void Persona::generarGenero() {
    // Genera aleatoriamente 0 (Hombre) o 1 (Mujer)
    genero = rand() % 2; 
}

void Persona::generarDNI() {
    // Genera un número de 8 dígitos
    int numero = rand() % 90000000 + 10000000; 
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    char letra = letras[numero % 23];
    sprintf(dni, "%08d%c", numero, letra);
}

// Devuelve la edad de la persona[cite: 1]
int Persona::getEdad() {
    return edad;
}

// Devuelve el género de la persona[cite: 1]
bool Persona::esMujer() {
    return genero;
}

// Establece la edad de la persona[cite: 1]
void Persona::setEdad(int e) {
    edad = e;
}

// Muestra un texto con toda la información de la persona[cite: 1]
void Persona::mostrar() {
    cout << "DNI: " << dni 
         << " | Edad: " << edad 
         << " | Genero: " << (genero ? "Mujer" : "Hombre") << endl;
}