#include "vuelo.h"
#include "aeronave.h"
#include "avion.h"
#include "helicoptero.h"
#include "jetPrivado.h"
#include "pasajero.h"
#include "persona.h"
#include "puertaEmbarque.h"
#include "torreDeControl.h"
#include "tripulacion.h"
#include <iostream>
int main(){
    Helicoptero h1;
    Helicoptero h2;
    Avion A1;
    Avion A2;
    PuertaEmbarque P1;
    PuertaEmbarque P2;
    Vuelo V1;
    h1.setId("h1");
    h2.setId("h2");
    A1.setId("A1");
    A2.setId("A2");
    P1.setNumPuerta(1);
    P1.setDisponible(true);
    P2.setNumPuerta(2);
    V1.setId("V1");
    V1.setAeronaveAsign(A1);
    TorreDeControl::getInstancia().añadirPuerta(P1);
    TorreDeControl::getInstancia().añadirPuerta(P2);
    TorreDeControl::getInstancia().añadirAeronave(A1);
    TorreDeControl::getInstancia().añadirAeronave(h1);
    TorreDeControl::getInstancia().añadirAeronave(A2);
    TorreDeControl::getInstancia().añadirAeronave(h2);
    A1.despegar();
    V1.Embarcar();
    cout<<"-------------------"<<endl;
    string Ub="panama";
    A1.reportarUbicacion(Ub);
    cout<<"-------------------"<<endl;
    cout<<(V1.getPuertaAsign()).getNumPuerta()<<endl;
    return 0;
}
