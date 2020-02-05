#include "videojuego.h"

Videojuego::Videojuego()
{
    cont = 0;
}

void Videojuego::agregar(const Personaje &p)
{
    if (cont < 5) {
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }
}

void Videojuego::mostrar()
{
    for (unsigned int i = 0; i < cont; i++) {
        Personaje &p = arreglo[i];

        cout << "Nombre: " << p.getNombre() << endl;
        cout << "Tipo:   " << p.getTipo() << endl;
        cout << "Fuerza: " << p.getFuerza() << endl;
        cout << "Salud:  " << p.getSalud() << endl;
    }
}



