#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED

#include <iostream>

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
void asignar_zona(int cant);
int generarTamanoPila();
void mostrarTamanoPila();
void asignar_zona_concesionario();
void borrarTodo();
void realizarSimulacionCompleta();

#endif
