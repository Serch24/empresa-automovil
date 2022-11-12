#include <iostream>
#include "automovil.h"

/* codigo hecho por Martina y Sergio ;)  */

using namespace std;

int main()
{
    int opcion;

    srand(time(NULL));
    do{
        cout <<"1. Generar automoviles aleatorios" << endl;
        cout <<"2. Generar tus automoviles" << endl;
        cout <<"3. Mostrar automoviles en fabrica" << endl;
        cout <<"4. Transportar automovil a la zona " << endl;
        cout <<"5. Mostrar tus automoviles en zona" << endl;
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
            cout << "Introduce el numero de automoviles que se van a crear: " << endl;
            cin >> nv;
            encola_automovil(nv);
            break;
        case 3:
            mostrar_fabrica();
            break;
        case 4:
            asignar_zona(-1);
            break;
        case 5:
            int ns;
            cout << "Introduce el numero de automoviles que salen del almacen: " << endl;
            cin >> ns;
            asignar_zona(ns);
            break;
        case 6:
           mostrarTamanoPila(); 
            break;
        case 7:
            borrarTodo();
            break;
        case 8:
            realizarSimulacionCompleta();
            break;

        }
    }while (opcion != 0);



    return 0;
}
