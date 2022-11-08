#include "cola.h"
//#include "nodo.h"

Cola::~Cola()
{
    while(primero) desencolar();
}

void Cola::encolar(Automovil v)
{
    pNodo nuevo; /* Crear un nodo nuevo*/
    nuevo = new Nodo(v);

    /* Si la cola no estaba vacía, añadimos el nuevo a continuación de último*/
    if(ultimo) ultimo->siguiente = nuevo;

    /* Ahora, el último elemento de la cola es el nuevo nodo*/
    ultimo = nuevo;

    /* Si primero es NULL, la cola estaba vacía, ahora primero apuntará también al nuevo nodo*/
    if(!primero) primero = nuevo;
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
    /* Asignamos a primero la dirección del segundo nodo*/
    primero = nodo->siguiente;

    /* Guardamos el valor de retorno*/
    v = nodo->valor;

    /* Borrar el nodo*/
    delete nodo;

    /* Si la cola quedó vacía, ultimo debe ser NULL también */
    if(!primero) ultimo = NULL;

    return v;
}

