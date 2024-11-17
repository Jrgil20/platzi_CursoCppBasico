#include <iostream>

using namespace std;

int main() {

    // Se imprime el Hola Mundo
    cout << "Hola Mundo \n";

    // Variables enteras
    int edad = 0; // Se declara una variable indicando el tipo, nombre y valor inicial 
    cout << "El valor inicial de la edad es: " << edad << endl;
    edad = 18; // Se cambia el valor de la variable 
    cout << "El valor final de la edad es: " << edad << endl;
    
    // Constantes
    const char letra = 'A'; // Se declara con la palabra const, no se puede cambiar
    cout << "El valor de la letra es " << letra << endl;

    // Listas 
    int lista_edades[] = { 18, 24, 16 }; // Se indica que es una lista con [] y entre {} van los valores separados por comas
    cout << "El valor de la edad 1 es: " << lista_edades[1] << endl; // Se usan índices que empiezan en 0 
    lista_edades[1] = 26; // Se modifica el valor
    cout << "El nuevo valor de la edad 1 es: " << lista_edades[1] << endl;

}