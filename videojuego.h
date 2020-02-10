#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include "personaje.h"

class Videojuego
{
    Personaje arreglo[5];
    unsigned int cont;

public:
    Videojuego();
    void agregar(const Personaje &p);
    void mostrar();
    void respaldar();
    void recuperar();
};

#endif // VIDEOJUEGO_H
