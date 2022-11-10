#include "automovil.h"

//#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Automovil leeAutomovil (void){
    Automovil p;
    cout << "\nIdentificador:\n";
    cin >> p.color;
    return p;
}

/**void escribeAutomovil (Automovil v){
    cout << v.Nbastidor << " " << v.modelo << " " << v.color << " " << v.concesionario << endl;
}*/

/**Automovil dameAutomovilVacio (void){
    Automovil p;
    //p.identificador=0;
    //p.dni="0";
    //p.nombre="0";
    return p;
}*/


string bastidorAleatorio(){
            string numBastidor;
            string letra = "";
            string unaLetra[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
            string digito = "0";
            string unDigito[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

            int j = 0;
            int t = 0;

          //  srand(time(NULL));
            for (j = 0; j < 3; j++){

                int i = 0;

                i = rand() % 25;
                letra += unaLetra[i];
            }
         //   srand(time(NULL));
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

            //srand(time(NULL));
            modeloRandom = rand() % 4;
            return nuevoModelo[modeloRandom];
            return unModelo;
        }

string  colorAleatorio(){

                //srand((unsigned int)time(NULL));
                int i = 0;
                string nuevoColor[] = {"rojo", "negro", "blanco", "azul", "verde", "gris"};
                //srand(time(NULL));
                i = rand() % 6;
                cout << i << "**" << endl;
                return nuevoColor[i];
        }


string concesionarioAleatorio(){

            int randomLetras = 0;
            int numeroRandom = 0;
            string nuevoConcesionarioLetras[] = {"A", "B", "C", "D"};

            //srand(time(NULL));
            randomLetras = rand() % 4;
            numeroRandom = rand() % 4 + 1;

            return nuevoConcesionarioLetras[randomLetras] + to_string(numeroRandom);
        }

vector<Automovil> generaAutomovil(){
    srand((unsigned int)time(NULL));
    int nv = 40 + rand() % (60 + 1 - 40);
    Automovil v;
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
    vector<Automovil> tmp;
    for(int a = 0; a < nv; a++){

            v.color = colorAleatorio();
            //v.concesionario = concesionarioAleatorio();
            v.modelo = modeloAleatorio();
            v.Nbastidor = bastidorAleatorio();
            v.indice = a;
            //cout << v->indice << " - " <<v->Nbastidor << " " << v->modelo << " " << v->color << " " << v->concesionario << endl;

            tmp.push_back(v);
    }
    return tmp;
    //return v;
 }

 vector<Automovil> generaAutomovil(int nv){
    //srand((unsigned int)time(NULL));
    Automovil v;
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
    vector<Automovil> tmp;
    for(int a = 0; a < nv; a++){

            v.color = colorAleatorio();
            //v.concesionario = concesionarioAleatorio();
            v.modelo = modeloAleatorio();
            v.Nbastidor = bastidorAleatorio();
            v.indice = a;
            //cout << v->indice << " - " <<v->Nbastidor << " " << v->modelo << " " << v->color << " " << v->concesionario << endl;

            tmp.push_back(v);
    }
    return tmp;
    //return v;
 }



