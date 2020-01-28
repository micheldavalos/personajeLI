#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std;

class Personaje
{
public:
    Personaje();
    void setNombre(string n);
    string getNombre();

    string getTipo() const;
    void setTipo(const string &value);

    int getFuerza() const;
    void setFuerza(int value);

    int getSalud() const;
    void setSalud(int value);

private:
    string nombre;
    string tipo;
    int fuerza;
    int salud;
};

#endif // PERSONAJE_H
