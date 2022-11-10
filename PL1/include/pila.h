#ifndef PILA_H
#define PILA_H

#include <iostream>
#include "nodo.h"
using namespace std;

class Pila
{
    private:
        pNodo cima;
    public:
        Pila() : cima(NULL) {}        //Constructor de Pila
        ~Pila();
        void apilar(Automovil v);
        Automovil desapilar();
        void aa();
};


#endif // PILA_H
