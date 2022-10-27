#include <iostream>

using namespace std;

int main()
{
    int opcion;

    do{
        cout <<"1. Generar automóviles disponibles" << endl;
        cout <<"2. Generar automóviles en la fábrica" << endl;
        cout <<"3. Mostrar automóviles en fábrica" << endl;
        cout <<"4. Transportar automóvil al almacén" << endl;
        cout <<"5. Mostrar utomóviles en el almacén" << endl;
        cout <<"6. Mostrar datos del almacén" << endl;
        cout <<"7. Borrar automóviles" << endl;
        cout <<"8. Realizar simulación" << endl;
        cout <<"0. Salir" << endl;

        cin >> opcion;
    }while (opcion != 0);



    return 0;
}
