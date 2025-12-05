#pragma once

#include <iostream>
using namespace std;

class Libro{
    protected:
        string titulo;
        string autor;
        int anio;
    public:
        Libro(string t, string a, int an){
            titulo = t;
            autor = a;
            anio = an;
        }

        void mostrarInfo(){
            cout << "Titulo: " << titulo << endl;
            cout << "Autor: " << autor << endl;
            cout << "Anio: " << anio << endl;
        }
};
