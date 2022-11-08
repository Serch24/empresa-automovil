#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED

#include <iostream>
#include "cola.h"

using namespace std;

struct Automovil
{
        string Nbastidor;
        string modelo;
        string color;
        string concesionario = "Z0";

        /**Automovil(string bastidorAleatorio, string modeloAleatorio, string colorAleatorio, string concesionarioAleatorio);
        ~Automovil();*/
};


Automovil leeAutomovil (void);
void escribeAutomovil (Automovil p);
Automovil dameAutomovilVacio (void);
Cola generaAutomovil(void);
string bastidorAleatorio();
string modeloAleatorio();
string colorAleatorio();
string concesionarioAleatorio();
Cola generaAutomovil(int numero);


#endif
