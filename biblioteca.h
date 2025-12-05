#pragma once
# include <iostream>
# include <vector>
# include "LibroAccion.h"
# include "LibroHistoria.h"

using namespace std;

class Biblioteca {
    private:
        vector<LibroAccion> librosAccion;
        vector<LibroHistoria> librosHistoria;

    public:
        Biblioteca() {}

        void agregarLibroAccion(LibroAccion& libro) {
            librosAccion.push_back(libro);
        }

        void agregarLibroHistoria(LibroHistoria& libro) {
            librosHistoria.push_back(libro);
        }

        void listarLibros(){
            cout << "Libros de Accion:" << endl;
            for (int i = 0; i < librosAccion.size(); i++) {
                cout << "Libro " << i + 1 << ":" << endl;
                librosAccion[i].mostrarInfo();
                cout << endl;
            }

            cout << "Libros de Historia:" << endl;
            for (int i = 0; i < librosHistoria.size(); i++) {
                cout << "Libro " << i + 1 << ":" << endl;
                librosHistoria[i].mostrarInfo();
                cout << endl;
            }
        }

};
