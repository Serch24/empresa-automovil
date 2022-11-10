#include <iostream>

#include "automovil.h"
#include "cola.h"
#include "pila.h"
#include "nodo.h"
#include <vector>

using namespace std;

int main()
{
    int opcion;

    do{
        cout <<"1. Generar automoviles disponibles" << endl;
        cout <<"2. Generar automoviles en la fabrica" << endl;
        cout <<"3. Mostrar automoviles en fabrica" << endl;
        cout <<"4. Transportar automovil al almacen" << endl;
        cout <<"5. Mostrar automoviles en el almacen" << endl;
        cout <<"6. Mostrar datos del almacen" << endl;
        cout <<"7. Borrar automoviles" << endl;
        cout <<"8. Realizar simulacion" << endl;
        cout <<"0. Salir" << endl;

        cin >> opcion;
        Cola cola;
        Pila pila;
        vector<Automovil> fabrica;
        switch (opcion){
        case 1:
            fabrica = generaAutomovil();


            for(Automovil zz: qwq)
                cout << zz.color << zz.concesionario << zz.modelo << zz.Nbastidor << endl;

            break;
        case 2:
            int nv;
            cout <<"Introduce el numero de automoviles que se van a generar: "<< endl;
            cin >> nv;

            qwq = generaAutomovil(nv);
            for(Automovil zz: qwq)
                cout << zz.color << zz.concesionario << zz.modelo << zz.Nbastidor << endl;

            break;
        case 3:
            // lo que María hará ;)
            break;
        case 4:
            // lo que María hará ;)
            break;
        case 5:
            // lo que María hará ;)
            break;
        case 6:
            // lo que María hará ;)
            break;
        case 7:
            // lo que María hará ;)
            break;
        case 8:
            // lo que María hará ;)
            break;

        }
    }while (opcion != 0);



    return 0;
}
