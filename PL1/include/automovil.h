#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED

#include <iostream>
//#include <vector>

using namespace std;

struct Automovil
{
        string Nbastidor;
        string modelo ;
        string color;
        string concesionario = "Z0";
};


Automovil leeAutomovil (void);
Automovil dameAutomovilVacio (void);

string bastidorAleatorio();
string modeloAleatorio();
string colorAleatorio();
string concesionarioAleatorio_letra();
string concesionarioAleatorio_numero();
int sacaCocheNS();
Automovil generaAutomovil(void);
Automovil generaAutomovil(int nv);
void encola_automovil();
void encola_automovil(int nv);
void mostrar_fabrica();
void mostrarPilaa();
void asignar_zona();
int generarTamanoPila();
void motrarTamanoPila();
void asignar_zona_concesionario();

#endif
