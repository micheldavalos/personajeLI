#include "videojuego.h"
#include <fstream>

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

        cout << p << endl;


    }
}

void Videojuego::respaldar()
{
    fstream archivo("personajes.txt", ios::out);

    if (archivo.is_open()) {
        for (unsigned int i = 0; i < cont; i++) {
            Personaje &p = arreglo[i];

            archivo << p.getNombre() << endl;
            archivo << p.getTipo() << endl;
            archivo << p.getFuerza() << endl;
            archivo << p.getSalud() << endl;
        }
    }
}

void Videojuego::recuperar()
{
    fstream archivo("personajes.txt", ios::in);
    if (archivo.is_open()) {
        while (!archivo.eof()) {
            string linea;
            Personaje p;

            getline(archivo, linea);
            if (archivo.eof()) {
                break;
            }
            p.setNombre(linea);

            getline(archivo, linea);
            p.setTipo(linea);

            getline(archivo, linea);
            int fuerza = stoi(linea);
            p.setFuerza(fuerza);

            getline(archivo, linea);
            int salud = stoi(linea);
            p.setSalud(salud);

            agregar(p);
        }
    }
}



