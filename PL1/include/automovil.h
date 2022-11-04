#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED

#include <iostream>

using namespace std;

struct Automovil
{
    string Nbastidor;
    string modelo;
    string color;
    string concesionario;

};

Automovil leeAutomovil (void);
void escribeAutomovil (Automovil p);
Automovil dameAutomovilVacio (void);

#endif
