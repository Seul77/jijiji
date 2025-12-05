#pragma once
#include "Libro.h"
#include <iostream>
using namespace std;
class LibroAccion : public Libro{
    private:
        string Protagonista;
        bool FinalFeliz;
    public:
        LibroAccion(string t, string a, int an, string p, bool ff) : Libro(t, a, an){
            Protagonista = p;
            FinalFeliz = ff;
        }
        string getProtagonista() {
            return Protagonista;
        }
        bool getFinalFeliz() {
            return FinalFeliz;
        }
        
        void setProtagonista(string p) {
            Protagonista = p;

        }
        void setFinalFeliz(bool ff) {
            FinalFeliz = ff;
        }

        void mostrarInfo() {
            Libro::mostrarInfo();
            cout << "Protagonista: " << Protagonista << endl;
            cout << "Final Feliz: " << (FinalFeliz ? "Si" : "No") << endl;
        }
};