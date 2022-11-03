#include "nodo.h"
#include "Automovil.h"


tRegistroAutomovil leeAutomovil (void){
    tRegistroAutomovil p;
    cout << "\nIdentificador:\n";
    p.identificador = identificadorAleatorio();
    cout << "\nDni: \n";
    p.dni = identificadorAleatorio() ++ dniAleatorio();
    cout << "\nNombre:\n";
    cin >> p.nombre;
    return p;
}

void escribeAutomovil (tRegistroAutomovil p){
    cout << p.identificador << " " << p.dni << " " << p.nombre << endl;
}

tRegistroAutomovil dameAutomovilVacio (void){
    tRegistroAutomovil p;
    p.identificador=0;
    p.dni="0";
    p.nombre="0";
    return p;
}

int identificadorAleatorio(void)
{
    int numaleat;
    numaleat=rand()% 9;
    return numaleat;
}

char dniAleatorio()
{
    int numaleat;
    numaleat=rand()% n;

    char letra;

}
