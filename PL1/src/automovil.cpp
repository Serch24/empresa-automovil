#include "automovil.h"

#include <iostream>

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

string modelo(){

    int i = 0;
    string unModelo = "";
    string nuevoModelo[] = {"Fiat", "Ford", "Seat", "Honda"}

    i = rand() % 4;
    unModelo = nuevoModelo[i];

    return unModelo;
}*/

string color(){

    int i = 0;
    string unColor = "";
    string nuevoColor[] = {"rojo", "negro", "blanco", "azul", "verde", "gris"}

    i = rand() % 6;
    unColor = nuevoColor[i];

    return unColor;
}

/**string concesionario(){

    int i = 0;
    string unConcesionario = ;
    string nuevoConcesionario[] = {"A", "B", "C", "D"}

    i rand() % 4;
    unConcesionario = nuevoConcesionario[i];

    return unConcesionario;
}*/


















