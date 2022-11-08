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

string bastidorAleatorio(){

    string numBastidor;
    string letra = "";
    string unaLetra[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    string digito = "0";
    string unDigito[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    int j = 0;
    int t = 0;

    srand(time(NULL));
    for (j = 0; j < 3; j++){
        int i = 0;

        i = rand() % 25;
        letra += unaLetra[i];
    }
    srand(time(NULL));
    for (t = 0; t < 4; t++){
        int i = 0;

        i = rand() % 9;
        digito += unDigito[i];
    }
    numBastidor = letra + digito;

    return numBastidor;
}

string modeloAleatorio(){
    int modeloRandom = 0;
    string unModelo = "";
    string nuevoModelo[] = {"Fiat", "Ford", "Seat", "Honda"};

    modeloRandom = rand() % 4;
    return nuevoModelo[modeloRandom];
    return unModelo;
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
