#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED

#include <iostream>
#include <vector>
//#include "cola.h"

using namespace std;

struct Automovil
{
        string Nbastidor;
        string modelo ;
        string color;
        string concesionario = "Z0";
        int indice;
};


Automovil leeAutomovil (void);
void escribeAutomovil (Automovil p);
Automovil dameAutomovilVacio (void);

//Automovil generaAutomovil();
//Automovil escribeAutomovil();
vector<Automovil> generaAutomovil(void);
string bastidorAleatorio();
string modeloAleatorio();
string colorAleatorio();
string concesionarioAleatorio();
vector<Automovil> generaAutomovil(int nv);


#endif
