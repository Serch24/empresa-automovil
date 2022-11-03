#include <iostream>

#include "Automovil.h"

using namespace std;

int main()
{
    int opcion;

    do{
        cout <<"1. Generar automoviles disponibles" << endl;
        cout <<"2. Generar automoviles en la fabrica" << endl;
        cout <<"3. Mostrar automoviles en fabrica" << endl;
        cout <<"4. Transportar automovil al almacen" << endl;
        cout <<"5. Mostrar utomoviles en el almacen" << endl;
        cout <<"6. Mostrar datos del almacen" << endl;
        cout <<"7. Borrar automoviles" << endl;
        cout <<"8. Realizar simulacion" << endl;
        cout <<"0. Salir" << endl;

        cin >> opcion;
    }while (opcion != 0);



    return 0;
}
