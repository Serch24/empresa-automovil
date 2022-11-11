#ifndef PILA_H
#define PILA_H

#include <iostream>
#include "nodo.h"
using namespace std;

class Pila
{
    private:
        int np = generarTamanoPila();
        int tamanoAhora = 0;
    public:
        Pila() : cima(NULL) {}        //Constructor de Pila
        ~Pila();
        pNodo cima;
        void apilar(Automovil v);
        Automovil desapilar();
        Automovil mostrar_cima();
        int tamanoDePila();
        int getTamanoAhora();
        void setTamanoAhora(int num);
};


#endif // PILA_H
