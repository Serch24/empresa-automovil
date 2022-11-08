#include "automovil.h"

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

Automovil leeAutomovil (void){
    Automovil p;
    cout << "\nIdentificador:\n";
    cin >> p.color;
    return p;
}

Automovil dameAutomovilVacio (void){
    Automovil p;
    //p.identificador=0;
    //p.dni="0";
    //p.nombre="0";
    return p;
}

/**string Nbastidor(){
    int i = 0;
    string numbastidor = 0;
    string bastidor[] = {};

    i = rand() % ;
    numbastidor = bastidor[i];

    return numbastidor;
}
*/

string modeloAleatorio(){

    int modeloRandom = 0;
    string unModelo = "";
    string nuevoModelo[] = {"Fiat", "Ford", "Seat", "Honda"};

    modeloRandom = rand() % 4;
    return nuevoModelo[modeloRandom];
}


string  colorAleatorio(){

        srand(time(NULL));
        int i = 0;
        string nuevoColor[] = {"rojo", "negro", "blanco", "azul", "verde", "gris"};
        i = rand() % 6;
        return nuevoColor[i];
}

string concesionarioAleatorio(){

    int randomLetras = 0;
    int numeroRandom = 0;
    string nuevoConcesionarioLetras[] = {"A", "B", "C", "D"};

    randomLetras = rand() % 4;
    numeroRandom = rand() % 4 + 1;

    return nuevoConcesionarioLetras[randomLetras] + to_string(numeroRandom);
}
