# pragma once
# include "Libro.h"
# include <iostream>
# include <string>

using namespace std;

class LibroHistoria : public Libro {
    private: 
        int epoca;
        string pais;

    public:
        LibroHistoria(string t, string a, int an, int ep, string p) : Libro(t, a, an) {
            epoca = ep;
            pais = p;
        }

        int getEpoca() {
            return epoca;
        }

        string getPais() {
            return pais;
        }

        void setEpoca(int ep) {
            epoca = ep;
        }

        void setPais(string p) {
            pais = p;
        }

        void mostrarInfo() {
            Libro::mostrarInfo();
            cout << "Epoca: " << epoca << endl;
            cout << "Pais: " << pais << endl;
        }

};
