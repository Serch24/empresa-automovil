#include "cola.h"
#include "nodo.h"

Cola::~Cola()
{
    while(primero) desencolar();
}

void Cola::mostrarCola(){
        pNodo aux = NULL;
        if(primero) {
                aux = new Nodo(primero->valor); 
                aux = primero;
        }
        while(aux){
                cout << aux->valor.Nbastidor << " " << aux->valor.modelo << " " << aux->valor.color << " "<< aux->valor.concesionario << endl;
                aux = aux->siguiente;
        }
        delete aux;
}

void Cola::encolar(Automovil v)
{

    pNodo nuevo; /* Crear un nodo nuevo*/
    nuevo = new Nodo(v);

    /* Si la cola no estaba vac?a, a?adimos el nuevo a continuaci?n de ?ltimo*/
    if(ultimo){
            ultimo->siguiente = nuevo;
    }
    /* Ahora, el ?ltimo elemento de la cola es el nuevo nodo*/
    ultimo = nuevo;

    /* Si primero es NULL, la cola estaba vac?a, ahora primero apuntar? tambi?n al nuevo nodo*/
    if(!primero) primero = nuevo;
}

Automovil Cola::cimaCola(){
    pNodo nodo; /* variable auxiliar para manipular nodo*/
    Automovil v; /* variable auxiliar para retorno*/

    /* Nodo apunta al primer elemento de la cola*/
    nodo = primero;

    if(!nodo){
            return dameAutomovilVacio(); /* Si no hay nodos en la cola retornamos 0*/
    }
    /* Asignamos a primero la direcci?n del segundo nodo*/
    primero = nodo->siguiente;

    /* Guardamos el valor de retorno*/
    v = nodo->valor;
    return v;
}

Automovil Cola::desencolar()
{
    pNodo nodo; /* variable auxiliar para manipular nodo*/
    Automovil v; /* variable auxiliar para retorno*/

    /* Nodo apunta al primer elemento de la pila*/
    nodo = primero;

    if(!nodo){
            return dameAutomovilVacio(); /* Si no hay nodos en la pila retornamos 0*/
    }
    /* Asignamos a primero la direcci?n del segundo nodo*/
    primero = nodo->siguiente;

    /* Guardamos el valor de retorno*/
    v = nodo->valor;

    /* Borrar el nodo*/
    delete nodo;

    /* Si la cola qued? vac?a, ultimo debe ser NULL tambi?n */
    if(!primero) ultimo = NULL;

    return v;
}

