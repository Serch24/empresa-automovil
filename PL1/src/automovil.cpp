#include "automovil.h"

#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <string>"
#include "cola.h"
#include "pila.h"

using namespace std;
Cola fabrica;
Pila camion;
//Cola aux_fabrica;


Automovil leeAutomovil (void){
    Automovil p;
    cout << "\nIdentificador:\n";
    cin >> p.color;
    return p;
}

Automovil dameAutomovilVacio(void){
    Automovil p;
    p.Nbastidor = "";
    p.modelo="";
    p.color="";
    p.concesionario = "";
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

            for (j = 0; j < 3; j++){

                int i = 0;

                i = rand() % 25;
                letra += unaLetra[i];
            }
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

                int i = 0;
                string nuevoColor[] = {"rojo", "negro", "blanco", "azul", "verde", "gris"};

                i = rand() % 6;
                return nuevoColor[i];
        }


string concesionarioAleatorio_letra(){
    string randomLetras;
    string nuevoConcesionarioLetras[] = {"A", "B", "C", "D"};
    randomLetras = rand() % 4;

    return nuevoConcesionarioLetras[randomLetras];
}

void asignar_zona(){
    Automovil aux_coche;
    while(fabrica.primero){
        aux_coche = fabrica.desencolar();

        aux_coche.concesionario = concesionarioAleatorio_letra() + "0";

        camion.apilar(aux_coche);

    }
}

string concesionarioAleatorio_numero(){
    int numeroRandom = 0;

    numeroRandom = rand() % 4 + 1;
    return numeroRandom;
}

Automovil generaAutomovil(){

    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
    //int nv = 40 + rand() % (60 + 1 - 40);
    Automovil v;
    v.color = colorAleatorio();
    v.modelo = modeloAleatorio();
    v.Nbastidor = bastidorAleatorio();
    return v;
 }

void encola_automovil(){
    int nv = 40 + rand() % (60 + 1 - 40);
    srand((unsigned int)time(NULL));

    for (int i = 0; i < nv; i++){
        fabrica.encolar(generaAutomovil());
    }
}


void encola_automovil(int nv){
    for (int i = 0; i < nv; i++){
        fabrica.encolar(generaAutomovil());
    }
}

void mostrar_fabrica(){
    Cola aux_fabrica;
    Automovil aux_coche;
    while(fabrica.primero){
        aux_coche = fabrica.desencolar();
        cout << aux_coche.modelo << " " << aux_coche.Nbastidor << " " << aux_coche.color << " " << aux_coche.concesionario << endl;
        aux_fabrica.encolar(aux_coche);
    }
    //fabrica = aux_fabrica;
}
