#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona {
private:
    bool genero; // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];

    // Métodos privados auxiliares para establecer valores automáticos
    void generarDNI();
    void generarGenero();

public:
    Persona(int edad);
    ~Persona();

    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
};

#endif