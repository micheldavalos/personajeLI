#include <iostream>
#include "videojuego.h"
using namespace std;

int main()
{
    Videojuego v;
    string op;

    while (true) {
        cout << "1) Agregar personaje" << endl;
        cout << "2) Mostrar personajes" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if (op == "1") {
            Personaje p;
            string s;
            int valor;

            cout << "Nombre: ";
            getline(cin, s);
            p.setNombre(s);

            cout << "Tipo: ";
            getline(cin, s);
            p.setTipo(s);

            cout << "Fuerza: ";
            cin >> valor;
            p.setFuerza(valor);

            cout << "Salud: ";
            cin >> valor; cin.ignore();
            p.setSalud(valor);

            v.agregar(p);
        }
        else if (op == "2") {
            v.mostrar();
        }
        else if (op == "0") {
            break;
        }

    }

    return 0;
}
