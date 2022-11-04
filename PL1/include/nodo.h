#ifndef NODO_H
#define NODO_H

#include "automovil.h"

using namespace std;

class Nodo
{
    private:
        Automovil valor;
        Nodo *siguiente;
        friend class Cola;
        friend class Pila;
    public:
        Nodo(Automovil v, Nodo *sig = NULL) //Constructor de Nodo
        {
        valor = v;
        siguiente = sig;
        }
};
typedef Nodo *pNodo;
#endif // NODO_H
