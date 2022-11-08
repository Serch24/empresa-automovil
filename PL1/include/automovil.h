#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED

#include <iostream>
#include <vector>
//#include "cola.h"

using namespace std;

struct Automovil
{
        string Nbastidor = "ad";
        string modelo = "ad";
        string color = "ad" ;
        string concesionario = "Z0";

        /**Automovil(string bastidorAleatorio, string modeloAleatorio, string colorAleatorio, string concesionarioAleatorio);
        ~Automovil();*/
};


Automovil leeAutomovil (void);
void escribeAutomovil (Automovil p);
Automovil dameAutomovilVacio (void);

vector<Automovil> generaAutomovil(void);
string bastidorAleatorio();
string modeloAleatorio();
string colorAleatorio();
string concesionarioAleatorio();
//Automovil * generaAutomovil(int numero);


#endif
