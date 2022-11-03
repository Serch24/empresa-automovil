#include "pila.h"

//Destructor de la Pila
Pila::~Pila()
{
    while(cima) desapilar();
}

//Meter elemento en la Pila
void Pila::apilar(tRegistroAutomovil v)
{
    pNodo nuevo; //Var aux para manipular el nuevo nodo

    //Se crea un nodo nuevo
    nuevo = new Nodo(v, cima);

    //El comienzo de la pila es el nuevo nodo
    cima = nuevo;
}

//Sacar elemento de la Pila
tRegistroAutomovil Pila::desapilar()
{
    pNodo nodo; //Var aux para manipular el nodo
    tRegistroAutomovil v; //Var aux para el retorno del valor del nodo

    if(!cima) return dameAutomovilVacio(); // Si no hay nodos en la pila se devuelve 0

    // Nodo apunta al primer elemento de la pila
    nodo = cima;

    //Se asigna a pila toda la pila menos el primer elemento
    cima= nodo->siguiente;

    //Se guarda el retorno del valor del nodo
    v = nodo->valor;

    //Se borra el nodo
    delete nodo;

    return v;
}

void Pila::mostrarCima()
{
    if(!cima) cout << "Cima: 0" << endl;
    else{ cout << "Cima: "  << endl; escribeAutomovil(cima->valor);}

}
