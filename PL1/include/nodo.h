#ifndef NODO_H
#define NODO_H

#include "Automovil.h"

using namespace std;

class Nodo
{
    private:
        tRegistroAutomovil valor;
        Nodo *siguiente;
        friend class Cola;
        friend class Pila;
    public:
        Nodo(tRegistroAutomovil v, Nodo *sig = NULL) //Constructor de Nodo
        {
        valor = v;
        siguiente = sig;
        }
};
typedef Nodo *pNodo;
#endif // NODO_H
