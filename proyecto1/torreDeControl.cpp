#include "torreDeControl.h"
#include "vuelo.h"
#include "aeronave.h"
//#include "puertaEmbarque.h"

void TorreDeControl::notificar(Aeronave* A, string mensaje){
    for (int i=0;i<notificacion.size();i++){
        if ((*(notificacion[i])).getId()!=(*A).getId()){
            (*(notificacion[i])).recibido(mensaje);
        }
    }
}

void TorreDeControl::aeronaveDespega(Aeronave* A){
    string mensaje = "la aeronave " + (*A).getId() + " ha despegado";
    notificar(A,mensaje);
}

void TorreDeControl::aeronaveAterriza(Aeronave* A){
    string mensaje = "la aeronave " + (*A).getId() + " ha aterrizado";
    notificar(A,mensaje);
}

void TorreDeControl::aeronaveComparte(Aeronave* A,string &mensaje){
    string mensaje1 = "la aeronave " + (*A).getId() + " se encuentra en " + mensaje;
    notificar(A,mensaje1);
}

void TorreDeControl::asignarPuerta(Vuelo* V){
    bool flag=true;
    for (int i=0;i<puertas.size();i++ and flag){
        if ((*(puertas[i])).getDisponible()){
            (*(puertas[i])).setDisponible(false);
            (*(puertas[i])).setVueloActual(V);
            (*(puertas[i])).añadirHistorial(V);
            flag=false;
            (*V).setPuertaAsign(puertas[i]);
        }
    }
    if (flag)
        cout<<"Por el momento no hay puertas disponibles"<<endl;
}

void TorreDeControl::añadirAeronave(Aeronave* A){
    notificacion.push_back(A);
}

void TorreDeControl::añadirPuerta(PuertaEmbarque* P){
    puertas.push_back(P);
}