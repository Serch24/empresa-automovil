#ifndef NODO_H
#define NODO_H

#include "automovil.h"

using namespace std;

class Nodo
{
    private:
        Automovil v;
        Nodo *siguiente;
        friend class Cola;
        friend class Pila;
    public:
        Nodo(Automovil valor, Nodo *sig = NULL) //Constructor de Nodo
        {
        v = valor;
        siguiente = sig;
        }
};
typedef Nodo *pNodo;
#endif // NODO_H
