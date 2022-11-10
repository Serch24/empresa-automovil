#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

struct Automovil
{
        string Nbastidor;
        string modelo ;
        string color;
        string concesionario = "Z0";
};


Automovil leeAutomovil (void);
void escribeAutomovil (Automovil p);
Automovil dameAutomovilVacio (void);

Automovil generaAutomovil(void);
string bastidorAleatorio();
string modeloAleatorio();
string colorAleatorio();
string concesionarioAleatorio_letra();
string concesionarioAleatorio_numero();
Automovil generaAutomovil(int nv);
void encola_automovil();
void encola_automovil(int nv);
void mostrar_fabrica();

#endif
