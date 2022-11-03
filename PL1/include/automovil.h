#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include <string>
#include <iostream>

using namespace std;

class Automovil
{
    public:
        Automovil();
        virtual ~Automovil();

    protected:

    private:
        string Nbastidor;
        string modelo;
        string color;
        string concesionario;
};

#endif // AUTOMOVIL_H
