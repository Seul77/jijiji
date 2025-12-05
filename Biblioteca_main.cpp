# include <iostream>
# include <string>
# include "biblioteca.h"

using namespace std;
int main(){
    Biblioteca BiblioTec;
    int opcion = 0;

    do {
        cout << "Menu de Biblioteca" << endl;
        cout << "1. Agregar Libro de Accion" << endl;
        cout << "2. Agregar Libro de Historia" << endl;
        cout << "3. Listar Libros" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(10000, '\n');

        if (opcion == 1) {
            string titulo, autor, protagonista;
            int anio;
            bool finalFeliz;

            cout << "Ingrese el titulo del libro: ";
            cin >> ws;
            getline(cin, titulo);
            cout << "Ingrese el autor del libro: ";
            getline(cin, autor);
            cout << "Ingrese el anio del libro: ";
            cin >> anio;
            cout << "Ingrese el protagonista del libro: ";
            cin >> ws;
            getline(cin, protagonista);
            cout << "El libro tiene final feliz? (1 para Si, 0 para No): ";
            cin >> finalFeliz;

            LibroAccion libroAccion(titulo, autor, anio, protagonista, finalFeliz);
            BiblioTec.agregarLibroAccion(libroAccion);

        } else if (opcion == 2) {
            string titulo, autor, pais;
            int anio, epoca;

            cout << "Ingrese el titulo del libro: ";
            cin >> ws;
            getline(cin, titulo);
            cout << "Ingrese el autor del libro: ";
            getline(cin, autor);
            cout << "Ingrese el anio del libro: ";
            cin >> anio;
            cout << "Ingrese la epoca del libro: ";
            cin >> epoca;
            cout << "Ingrese el pais del libro: ";
            cin >> ws;
            getline(cin, pais);

            LibroHistoria libroHistoria(titulo, autor, anio, epoca, pais);
            BiblioTec.agregarLibroHistoria(libroHistoria);

        } else if (opcion == 3) {
            BiblioTec.listarLibros();
        }
    
    } while (opcion != 4);

    return 0;
    
}