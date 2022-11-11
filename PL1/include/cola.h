#ifndef COLA_H
#define COLA_H

#include <iostream>
#include "nodo.h"


using namespace std;

class Cola
{
    public:
        Cola() : ultimo (NULL), primero(NULL){}
        ~Cola();
        void encolar(Automovil v);
        Automovil desencolar();
        Automovil cimaCola();
        pNodo primero;
        int tamanoDeCola;

    protected:

    private:
        pNodo ultimo;
};

#endif // COLA_H

