#include <iostream>

#include "automovil.h"

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

        switch (opcion){
        case 1:
            encola_automovil();
            break;
        case 2:
            int nv;
            cout << "introcude algo " << endl;
            cin >> nv;
            encola_automovil(nv);
            break;

        case 3:
            mostrar_fabrica();
            break;
        case 4:

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
