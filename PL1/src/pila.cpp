#include "pila.h"


//Meter elemento en la Pila
void Pila::apilar(Automovil v)
{
    pNodo nuevo; //Var aux para manipular el nuevo nodo

    //Se crea un nodo nuevo
    nuevo = new Nodo(v, cima);

    //El comienzo de la pila es el nuevo nodo
    cima = nuevo;
}

//Sacar elemento de la Pila
Automovil Pila::desapilar()
{
    pNodo nodo; //Var aux para manipular el nodo
    Automovil valor; //Var aux para el retorno del valor del nodo

    //if(!cima) return dameAutomovilVacio(); // Si no hay nodos en la pila se devuelve 0
    if(!cima) return dameAutomovilVacio();

    // Nodo apunta al primer elemento de la pila
    nodo = cima;

    //Se asigna a pila toda la pila menos el primer elemento
    cima= nodo->siguiente;

    //Se guarda el retorno del valor del nodo
    //v = nodo->valor;
    valor = nodo->valor;

    //Se borra el nodo
    delete nodo;

    //return v;
    return valor;
}

//Destructor de la Pila
Pila::~Pila()
{
    while(cima) desapilar();
}

void Pila::aa(){
    if(cima){
        cout << cima->valor.Nbastidor << endl;
        cout << "aaa" << endl;
    }else{
        cout << "bbb" << endl;
    }

}

/**void Pila::mostrarCima()
{
    if(!cima) cout << "Cima: 0" << endl;
    else{
        cout << "Cima: "  << endl;
        Automovil escribeAutomovil(cima->valor);
    }

}*/

