#ifndef COLA_H
#define COLA_H

#include <iostream>
#include "nodos.h"

using namespace std;

class Cola
{
    public:
        Cola() : ultimo (NULL), primero(NULL){}
        ~Cola();
        void encolar(tRegistroAutomovil v);
        tRegistroAutomovil desencolar();

    protected:

    private:
        pNodo ultimo, primero;
};

#endif // COLA_H
