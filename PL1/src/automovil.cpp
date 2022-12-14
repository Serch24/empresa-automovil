#include "automovil.h"

#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <string>
#include "cola.h"
#include "nodo.h"
#include "pila.h"

using namespace std;
Cola fabrica;

Pila camionA0;
Pila camionA1;

Pila camionB0;
Pila camionB1;

Pila camionC0;
Pila camionC1;

Pila camionD0;
Pila camionD1;

Cola registroA;
Cola registroB;
Cola registroC;
Cola registroD;

//Cola aux_fabrica;

Automovil dameAutomovilVacio(void){     //coche vacio
    Automovil p;
    p.Nbastidor = "";
    p.modelo="";
    p.color="";
    p.concesionario = "";
    return p;
}

string bastidorAleatorio(){     //genera bastidor aleatorio
    string numBastidor;
    string letra = "";
    string unaLetra[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    string digito = "";
    string unDigito[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    int j = 0;
    int t = 0;

    for (j = 0; j < 4; j++){
        int i = 0;

        i = rand() % 25;
        letra += unaLetra[i];
    }
    for (t = 0; t < 3; t++){
        int i = 0;

        i = rand() % 9;
        digito += unDigito[i];
    }
    numBastidor = letra + digito;

    return numBastidor;
}

string modeloAleatorio(){   //genera modelo aleatorio
    int modeloRandom = 0;
    string nuevoModelo[] = {"Fiat", "Ford", "Seat", "Honda"};
    modeloRandom = rand() % 4;
    return nuevoModelo[modeloRandom];
}

int sacaCocheNS(){
    return 6 + rand() %  (12 + 1 - 6);
}

string  colorAleatorio(){   //genera color aleatorio
    int i = 0;
    string nuevoColor[] = {"rojo", "negro", "blanco", "azul", "verde", "gris"};

    i = rand() % 6;
    return nuevoColor[i];
}

void realizarSimulacionCompleta(){
        cout << "--------------  Automoviles aleatorios --------------" <<endl;
        cout << " " << endl;
        encola_automovil();
        cout << " " << endl;
        cout << "----------------------------------------------------- " << endl;

        cout << "------------ Coches en fabrica ----------------" << endl;
        cout << " " << endl;
        mostrar_fabrica();
        cout << "----------------------------------------------------- " << endl;

        cout << " Asignando zonas a los automoviles y apilandolos en los camiones" << endl;
        cout << " " << endl;
        while(fabrica.primero){
                asignar_zona(-1);
                cout << "----------------------------------------------------- " << endl;

                cout << "Mostrando los datos de los camiones y registros " << endl;
                cout << " " << endl;
                mostrarTamanoPila();
                cout << "----------------------------------------------------- " << endl;
        }

        cout << "Borrando los camiones y los registros" << endl;
        cout << " " << endl;
        borrarTodo();
        cout << "----------------------------------------------------- " << endl;

}

void borrarTodo(){
        // se limpia la fabrica
        while(fabrica.primero){
                fabrica.desencolar();
                fabrica.tamanoDeCola = fabrica.tamanoDeCola - 1;
        }

        // se limpian todos los camiones
        while(camionA0.cima){
                int size = camionA0.getTamanoAhora();
                camionA0.desapilar();
                camionA0.setTamanoAhora(size - 1);
        }
        while(camionA1.cima){
                int size = camionA1.getTamanoAhora();
                camionA1.desapilar();
                camionA1.setTamanoAhora(size - 1);
        }
        while(camionB0.cima){
                int size = camionB0.getTamanoAhora();
                camionB0.desapilar();
                camionB0.setTamanoAhora(size - 1);
        }
        while(camionB1.cima){
                int size = camionB1.getTamanoAhora();
                camionB1.desapilar();
                camionB1.setTamanoAhora(size - 1);
        }
        while(camionC0.cima){
                int size = camionC0.getTamanoAhora();
                camionC0.desapilar();
                camionC0.setTamanoAhora(size - 1);
        }
        while(camionC1.cima){
                int size = camionC1.getTamanoAhora();
                camionC1.desapilar();
                camionC1.setTamanoAhora(size - 1);
        }
        while(camionD0.cima){
                int size = camionD0.getTamanoAhora();
                camionD0.desapilar();
                camionD0.setTamanoAhora(size - 1);
        }
        while(camionD1.cima){
                int size = camionD1.getTamanoAhora();
                camionD1.desapilar();
                camionD1.setTamanoAhora(size - 1);
        }

        // se limpian los todos los registros
        while(registroA.primero){
                registroA.desencolar();
                registroA.tamanoDeCola = registroA.tamanoDeCola - 1;
        }
        while(registroB.primero){
                registroB.desencolar();
                registroB.tamanoDeCola = registroB.tamanoDeCola - 1;
        }
        while(registroC.primero){
                registroC.desencolar();
                registroC.tamanoDeCola = registroC.tamanoDeCola - 1;
        }
        while(registroD.primero){
                registroD.desencolar();
                registroD.tamanoDeCola = registroD.tamanoDeCola - 1;
        }

        cout << " Se han borrado todos los datos!" << endl;
        cout << " ----------------------------------------------------" << endl;
        cout << " " << endl;

}
string concesionarioAleatorio_letra(){      //genera letra aleatoria del concesionario
    int randomLetra;
    string nuevoConcesionarioLetra[] = {"A0", "B0", "C0", "D0"};
    randomLetra = rand() % 4;

    return nuevoConcesionarioLetra[randomLetra];
}

void asignar_zona_concesionario(){
    Automovil autom;
    int i = 1;
    while(camionA0.cima){
            int sizeCamion = camionA0.getTamanoAhora(); 
            autom = camionA0.desapilar();
            autom.concesionario = string("A").append(to_string(i));
            registroA.encolar(autom);
            registroA.tamanoDeCola =  registroA.tamanoDeCola + 1;
            camionA0.setTamanoAhora(sizeCamion - 1);
            cout << autom.Nbastidor << " " << autom.modelo << " " <<autom.color << " " << autom.concesionario << endl;
            i = i + 1;
    }
    i = 1;
    while(camionA1.cima){
        int sizeCamion = camionA1.getTamanoAhora(); 
        autom = camionA1.desapilar();
        autom.concesionario = string("A").append(to_string(i));
        registroA.encolar(autom);
        registroA.tamanoDeCola =  registroA.tamanoDeCola + 1;
        camionA1.setTamanoAhora(sizeCamion - 1);
        cout << autom.Nbastidor << " " << autom.modelo << " " <<autom.color << " " << autom.concesionario << endl;
        i = i + 1;
    }

    i = 1;
    while(camionB0.cima){
        int sizeCamion = camionB0.getTamanoAhora(); 
        autom = camionB0.desapilar();
        autom.concesionario = string("B").append(to_string(i));
        registroB.encolar(autom);
        registroB.tamanoDeCola =  registroB.tamanoDeCola + 1;
        camionB0.setTamanoAhora(sizeCamion - 1);
        cout << autom.Nbastidor << " " << autom.modelo << " " <<autom.color << " " << autom.concesionario << endl;
        i = i + 1;
    }

    i = 1;
    while(camionB1.cima){
        int sizeCamion = camionB1.getTamanoAhora(); 
        autom = camionB1.desapilar();
        autom.concesionario = string("B").append(to_string(i));
        registroB.encolar(autom);
        registroB.tamanoDeCola =  registroB.tamanoDeCola + 1;
        camionB1.setTamanoAhora(sizeCamion - 1);
        cout << autom.Nbastidor << " " << autom.modelo << " " <<autom.color << " " << autom.concesionario << endl;
        i = i + 1;
    }

    i = 1;
    while(camionC0.cima){
        int sizeCamion = camionC0.getTamanoAhora(); 
        autom = camionC0.desapilar();
        autom.concesionario = string("C").append(to_string(i));
        registroC.encolar(autom);
        registroC.tamanoDeCola =  registroC.tamanoDeCola + 1;
        camionC0.setTamanoAhora(sizeCamion - 1);
        cout << autom.Nbastidor << " " << autom.modelo << " " <<autom.color << " " << autom.concesionario << endl;
        i = i + 1;
    }

    i = 1;
    while(camionC1.cima){
        int sizeCamion = camionC1.getTamanoAhora(); 
        autom = camionC1.desapilar();
        autom.concesionario = string("C").append(to_string(i));
        registroC.encolar(autom);
        registroC.tamanoDeCola =  registroC.tamanoDeCola + 1;
        camionC1.setTamanoAhora(sizeCamion - 1);
        cout << autom.Nbastidor << " " << autom.modelo << " " <<autom.color << " " << autom.concesionario << endl;
        i = i + 1;
    }

    i = 0;
    while(camionD0.cima){
        int sizeCamion = camionD0.getTamanoAhora(); 
        autom = camionD0.desapilar();
        autom.concesionario = string("D").append(to_string(i));
        registroD.encolar(autom);
        registroD.tamanoDeCola =  registroD.tamanoDeCola + 1;
        camionD0.setTamanoAhora(sizeCamion - 1);
        cout << autom.Nbastidor << " " << autom.modelo << " " <<autom.color << " " << autom.concesionario << endl;
        i = i + 1;
    }

    i = 0;
    while(camionD1.cima){
        int sizeCamion = camionD1.getTamanoAhora(); 
        autom = camionD1.desapilar();
        autom.concesionario = string("D").append(to_string(i));
        registroD.encolar(autom);
        registroD.tamanoDeCola =  registroD.tamanoDeCola + 1;
        camionD1.setTamanoAhora(sizeCamion - 1);
        cout << autom.Nbastidor << " " << autom.modelo << " " <<autom.color << " " << autom.concesionario << endl;
        i = i + 1;
    }
}

void asignar_zona(int cant = -1){    //asigna zona a los coches
    Automovil aux_coche;
    string aux_cons;
    int ns;
    if(cant == -1){
            ns = sacaCocheNS();
            cout << " NS dio: "<< ns << endl;
            cout << " " << endl;
    }else{
            ns = cant;
    }
    
    for(int i = 0; i < ns; i++){
        if(fabrica.primero){
                aux_coche = fabrica.desencolar();
                fabrica.tamanoDeCola = fabrica.tamanoDeCola - 1;
                aux_coche.concesionario = concesionarioAleatorio_letra();
                aux_cons = aux_coche.concesionario;
                if(aux_cons == "A0"){
                    int aux_size0 = 0;
                    int aux_size1 = 0;
                    aux_size0 = camionA0.getTamanoAhora();
                    aux_size1 = camionA1.getTamanoAhora();
                    if(aux_size0 < camionA0.tamanoDePila()){
                        camionA0.apilar(aux_coche);
                        camionA0.setTamanoAhora(aux_size0 + 1);
                    }else if(aux_size1 < camionA1.tamanoDePila()){
                        camionA1.apilar(aux_coche);
                        camionA1.setTamanoAhora(aux_size1 + 1);
                    }else{
                       /* cout << "Los dos camiones A se llenaron, creo" << endl; */ 
                    }
                }
                if(aux_cons == "B0"){
                    int aux_size0 = 0;
                    int aux_size1 = 0;
                    aux_size0 = camionB0.getTamanoAhora();
                    aux_size1 = camionB1.getTamanoAhora();
                    if(aux_size0 < camionB0.tamanoDePila()){
                        camionB0.apilar(aux_coche);
                        camionB0.setTamanoAhora(aux_size0 + 1);
                    }else if(aux_size1 < camionB1.tamanoDePila()){
                        camionB1.apilar(aux_coche);
                        camionB1.setTamanoAhora(aux_size1 + 1);
                    }else{
                        //lo que Martina har? ;)
                    }
                }
                if (aux_cons == "C0"){
                    int aux_size0 = 0;
                    int aux_size1 = 0;
                    aux_size0 = camionC0.getTamanoAhora();
                    aux_size1 = camionC1.getTamanoAhora();
                    if(aux_size0 <camionC0.tamanoDePila()){
                        camionC0.apilar(aux_coche);
                        camionC0.setTamanoAhora(aux_size0 + 1);
                    }else if(aux_size1 < camionC1.tamanoDePila()){
                        camionC1.apilar(aux_coche);
                        camionC1.setTamanoAhora(aux_size1 + 1);
                    }else{
                        //lo que Martina har? ;)
                    }
                }
                if(aux_cons == "D0"){
                    int aux_size0 = 0;
                    int aux_size1 = 0;
                    aux_size0 = camionD0.getTamanoAhora();
                    aux_size1 = camionD1.getTamanoAhora();
                    if(aux_size0 < camionD0.tamanoDePila()){
                        camionD0.apilar(aux_coche);
                        camionD0.setTamanoAhora(aux_size0 + 1);
                    }else if(aux_size1 < camionD1.tamanoDePila()){
                        camionD1.apilar(aux_coche);
                        camionD1.setTamanoAhora(aux_size1 + 1);
                    }else{
                        //lo que Martina har? ;)
                    }
                }
        }else{
                cout << "Ya no hay m?s automoviles en la fabrica." << endl;
                cout << " " << endl;
                break;
        }
    }
    asignar_zona_concesionario();
}

void mostrarTamanoPila(){
    cout << "||||||||||| Informacion de los camiones y los registros |||||||||||||" << endl;
    cout << " " << endl;
    cout << "Hay automoviles en camion A0: " << camionA0.getTamanoAhora() << endl;
    cout << "Hay automoviles en camion A1: " << camionA1.getTamanoAhora() << endl;
    cout << "Hay automoviles en el registro A: " << registroA.tamanoDeCola << endl;
    cout << " " << endl;
    cout << "Hay automoviles en camion B0: " << camionB0.getTamanoAhora() << endl;
    cout << "Hay automoviles en camion B1: " << camionB1.getTamanoAhora() << endl;
    cout << "Hay automoviles en el registro B: " << registroB.tamanoDeCola << endl;
    cout << " " << endl;
    cout << "Hay automoviles en camion C0: " << camionC0.getTamanoAhora() << endl;
    cout << "Hay automoviles en camion C1: " << camionC1.getTamanoAhora() << endl;
    cout << "Hay automoviles en el registro C: " << registroC.tamanoDeCola << endl;
    cout << " " << endl;
    cout << "Hay automoviles en camion D0: " << camionD0.getTamanoAhora() << endl;
    cout << "Hay automoviles en camion D1: " << camionD1.getTamanoAhora() << endl;
    cout << "Hay automoviles en el registro D: " << registroD.tamanoDeCola << endl;
    cout << " " << endl;
    cout << " Hay Automoviles en fabrica: "<< fabrica.tamanoDeCola  << endl;
    cout << " " << endl;
    cout << "|||||||||||||||||||||||||||||||| " << endl;
    cout << " " << endl;
    
}

int generarTamanoPila(){
    return (6 + rand() % (8 + 1 - 6));
}

string concesionarioAleatorio_numero(){

    string numRand[] = {"1", "2", "3", "4"};
    return numRand[1 + rand() % (3 + 1 - 1)];
}
Automovil generaAutomovil(){    //genera un coche aleatorio
    Automovil v;
    v.color = colorAleatorio();
    v.modelo = modeloAleatorio();
    v.Nbastidor = bastidorAleatorio();
    return v;
 }

void encola_automovil(){    //Punto 1: encola NV (40-60) coches
    Automovil a;
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
    int nv = 40 + rand() % (60 + 1 - 40);
    for (int i = 0; i < nv; i++){
        a = generaAutomovil();
        fabrica.encolar(a);
        fabrica.tamanoDeCola = fabrica.tamanoDeCola + 1;
        cout << a.Nbastidor << " " << a.modelo << " " << a.color << " " << a.concesionario << endl;
        //fabrica.tamanoDeCola = fabrica.tamanoDeCola + 1;
    }
    cout << "Fabrica: "<< fabrica.tamanoDeCola  << endl;
}

void encola_automovil(int nv){      //Punto 2: encola NV coches
    Automovil a;
    for (int i = 0; i < nv; i++){
        a = generaAutomovil();
        cout << a.Nbastidor << " " << a.modelo << " " << a.color << " " << a.concesionario << endl;
        fabrica.encolar(a);
        fabrica.tamanoDeCola = fabrica.tamanoDeCola + 1;
        //fabrica.tamanoDeCola += 1;

    }
    cout << "Fabrica: "<< fabrica.tamanoDeCola  << endl;
}

void mostrar_fabrica(){     //Punto 3: imprime coches de la cola
    fabrica.mostrarCola();
}
