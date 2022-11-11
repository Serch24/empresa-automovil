#include "automovil.h"

#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <string>
#include "cola.h"
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

Automovil leeAutomovil (void){
    Automovil p;
    cout << "\nIdentificador:\n";
    cin >> p.color;
    return p;
}

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
    string digito = "0";
    string unDigito[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    int j = 0;
    int t = 0;

    for (j = 0; j < 3; j++){
        int i = 0;

        i = rand() % 25;
        letra += unaLetra[i];
    }
    for (t = 0; t < 4; t++){
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

string concesionarioAleatorio_letra(){      //genera letra aleatoria del concesionario
    int randomLetra;
    string nuevoConcesionarioLetra[] = {"A0", "B0", "C0", "D0"};
    randomLetra = rand() % 4;

    return nuevoConcesionarioLetra[randomLetra];
}

void asignar_zona_concesionario(){
    Automovil automA;
    Automovil automB;
    Automovil automC;
    Automovil automD;
    while(camionA0.cima){
        automA = camionA0.desapilar();
        automA.concesionario = string("A").append(concesionarioAleatorio_numero());
        cout << automA.concesionario << endl;
    }
}

void asignar_zona(){    //asigna zona a los coches

    Automovil aux_coche;
    string aux_cons;
    /**for(int i = 0; i < sacaCocheNS(); i++){

    }*/
    while(fabrica.primero){
        aux_coche = fabrica.desencolar();
        aux_coche.concesionario = concesionarioAleatorio_letra();
        aux_cons = aux_coche.concesionario;
        //cout << aux_cons << endl;
        if(aux_cons == "A0"){
            int aux_size0 = 0;
            int aux_size1 = 0;
            aux_size0 = camionA0.getTamanoAhora();
            aux_size1 = camionA1.getTamanoAhora();
            if(aux_size0 < camionA0.tamanoDePila()){
                camionA0.apilar(aux_coche);
                //cout << camionA0.getTamanoAhora() << endl;
                camionA0.setTamanoAhora(aux_size0 + 1);
            }else if(aux_size1 < camionA1.tamanoDePila()){
                camionA1.apilar(aux_coche);
                camionA1.setTamanoAhora(aux_size0 + 1);
            }else{
                //lo que Martina har� ;)
            }
        }
        if(aux_cons == "B0"){
            int aux_size0 = 0;
            int aux_size1 = 0;
            aux_size0 = camionB0.getTamanoAhora();
            aux_size1 = camionB1.getTamanoAhora();
            if(camionB0.getTamanoAhora()<camionB0.tamanoDePila()){
                camionB0.apilar(aux_coche);
                camionB0.setTamanoAhora(aux_size0 + 1);

            }else if(camionB1.getTamanoAhora()< camionB1.tamanoDePila()){
                camionB1.apilar(aux_coche);
                camionB1.setTamanoAhora(aux_size1 + 1);
            }else{
                //lo que Martina har� ;)
            }
        }
        if (aux_cons == "C0"){
            int aux_size0 = 0;
            int aux_size1 = 0;
            aux_size0 = camionC0.getTamanoAhora();
            aux_size1 = camionC1.getTamanoAhora();
            if(camionC0.getTamanoAhora()<camionC0.tamanoDePila()){
                camionC0.apilar(aux_coche);
                camionC0.setTamanoAhora(aux_size0 + 1);
            }else if(camionC1.getTamanoAhora()<camionC1.tamanoDePila()){
                camionC1.apilar(aux_coche);
                camionC1.setTamanoAhora(aux_size1 + 1);
            }else{
                //lo que Martina har� ;)
            }
        }
        if(aux_cons == "D0"){
            int aux_size0 = 0;
            int aux_size1 = 0;
            aux_size0 = camionD0.getTamanoAhora();
            aux_size1 = camionD1.getTamanoAhora();
            if(camionD0.getTamanoAhora()<camionD0.tamanoDePila()){
                camionD0.apilar(aux_coche);
                camionD0.setTamanoAhora(aux_size0 + 1);
            }else if(camionD1.getTamanoAhora()<camionD1.tamanoDePila()){
                camionD1.apilar(aux_coche);
                camionD1.setTamanoAhora(aux_size1 + 1);
            }else{
                //lo que Martina har� ;)
            }
        }
    }
}

void motrarTamanoPila(){
    cout << "camion A0: " << camionA0.getTamanoAhora() << endl;
    cout << "camion A1: " << camionA1.getTamanoAhora() << endl;
    cout << "camion B0: " << camionB0.getTamanoAhora() << endl;
    cout << "camion B1: " << camionB1.getTamanoAhora() << endl;
    cout << "camion C0: " << camionC0.getTamanoAhora() << endl;
    cout << "camion C1: " << camionC1.getTamanoAhora() << endl;
    cout << "camion D0: " << camionD0.getTamanoAhora() << endl;
    cout << "camion D1: " << camionD1.getTamanoAhora() << endl;
}

int generarTamanoPila(){
    return (6 + rand() % (8 + 1 - 6));
}

void mostrarPilaa(){
    Automovil a = camionA0.mostrar_cima();
    cout << a.concesionario << " " << a.Nbastidor << " " << a.color << " " << a.modelo << endl;
}

string concesionarioAleatorio_numero(){

    string numRand[] = {"1", "2", "3", "4"};
    return numRand[1 + rand() % (4 + 1 - 1)];
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
    srand((unsigned int)time(NULL));
    a = generaAutomovil();
    //srand((unsigned int)time(NULL));
    for (int i = 0; i < nv; i++){
        fabrica.encolar(a);
        cout << a.Nbastidor << " " << a.modelo << " " << a.color << " " << a.concesionario << endl;
        //fabrica.tamanoDeCola = fabrica.tamanoDeCola + 1;
    }
}

void encola_automovil(int nv){      //Punto 2: encola NV coches
    Automovil a;
    for (int i = 0; i < nv; i++){
        a = generaAutomovil();
        cout << a.Nbastidor << " " << a.modelo << " " << a.color << " " << a.concesionario << endl;
        fabrica.encolar(a);
        //fabrica.tamanoDeCola += 1;

    }
}

void mostrar_fabrica(){     //Punto 3: imprime coches de la cola
    cout << fabrica.tamanoDeCola << endl;
    Cola aux_fabrica;
    Automovil aux_coche;
    while(fabrica.primero){
        aux_coche = fabrica.desencolar();
        cout << aux_coche.Nbastidor << " " << aux_coche.modelo << " " << aux_coche.color << " " << aux_coche.concesionario << endl;
        aux_fabrica.encolar(aux_coche);
    }
    //fabrica = aux_fabrica;
}
