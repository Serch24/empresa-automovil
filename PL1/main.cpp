#include <iostream>

using namespace std;

int main()
{
    int opcion;

    do{
        cout <<"1. Generar autom�viles disponibles" << endl;
        cout <<"2. Generar autom�viles en la f�brica" << endl;
        cout <<"3. Mostrar autom�viles en f�brica" << endl;
        cout <<"4. Transportar autom�vil al almac�n" << endl;
        cout <<"5. Mostrar utom�viles en el almac�n" << endl;
        cout <<"6. Mostrar datos del almac�n" << endl;
        cout <<"7. Borrar autom�viles" << endl;
        cout <<"8. Realizar simulaci�n" << endl;
        cout <<"0. Salir" << endl;

        cin >> opcion;
    }while (opcion != 0);



    return 0;
}
