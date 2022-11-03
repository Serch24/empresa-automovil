#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include <iostream>

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
