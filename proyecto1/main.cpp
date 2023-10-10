#include "vuelo.h"
#include "aeronave.h"
#include "aeropuerto.h"
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
    Pasajero* Pa1 = new Pasajero("66724670","Judith","Zapata","1/10/1990","F","cr. 90 #10-22","3113312255","j.f@gmail.com","Colombiana",3,"o+, alergias: no");
    Pasajero* Pa2 = new Pasajero("66724670","Sofia","Zapata","1/10/2007","F","cr. 90 #10-22","3113312255","j.f@gmail.com","Colombiana",3,"o+, alergias: no");
    Tripulacion* T1 = new Tripulacion("11078411","Jaime","Nunez","1/12/1980","M","cr.23 #10-50","3122167788","j.c@gmail.com","comandante",10,8);
    Tripulacion* T2 = new Tripulacion("11034561","Juan","Munoz","9/03/1990","M","cr.45 #30-50","3120316788","j.m@gmail.com","copiloto",6,7);
    Tripulacion* T3 = new Tripulacion("11030901","Sara","Izquierdo","12/05/1994","F","cr.95 #31-20","3114056677","s.i@gmail.com","azafata",2,10);
    vector<Tripulacion*> trip1;
    trip1.push_back(T1);
    trip1.push_back(T2);
    trip1.push_back(T3);
    Helicoptero* h1 = new Helicoptero("Boeing","h1","1234",4,300,"600km",2020,"servicio",false,2,100,"rescate");
    Helicoptero* h2= new Helicoptero("Boeing","h2","111",7,400,"500km",2018,"mantenimiento",false,5,100,"turismo");
    Avion* A1 = new Avion("Boeing","A1","2031",5,200,"500km",2011,"servicio",false,500,20,"turismo");
    Avion* A2 = new Avion("Boeing","A2","203",4,500,"700km",2021,"servicio",false,500,10,"turismo");
    PuertaEmbarque* P1 = new PuertaEmbarque(1,"este",true);
    PuertaEmbarque* P2 = new PuertaEmbarque(2,"norte",true);
    Vuelo* V1 = new Vuelo("AV01","10/10/23","Cali","Bog",40,trip1);
    Vuelo* V2 = new Vuelo("AV02","11/10/23","Cali","Med",50,trip1);
    A1->anadirVuelo(V1);
    A2->anadirVuelo(V2);
    cout<<endl;
    V1->setAeronaveAsign(A1);
    V1->setAeronaveAsign(A2);
    Aeropuerto::getInstancia().anadirAeronave(A1);
    Aeropuerto::getInstancia().anadirAeronave(A2);
    Aeropuerto::getInstancia().anadirAeronave(h1);
    Aeropuerto::getInstancia().anadirAeronave(h2);
    Aeropuerto::getInstancia().anadirVuelo(V1);
    Aeropuerto::getInstancia().anadirVuelo(V2);
    Aeropuerto::getInstancia().anadirPuerta(P1);
    Aeropuerto::getInstancia().anadirPuerta(P2);
    Pa1->verVuelos("10/10/23","Cali","Bog");
    Aeropuerto::getInstancia().reservarVuelo("1",Pa1);
    Pa2->verVuelos("11/10/23","Cali","Bog");
    Pa2->verVuelos("11/10/23","Cali","Med");
    Aeropuerto::getInstancia().reservarVuelo("2",Pa2);
    string s1="h1",s2="h2",s3="A1",s4="A2",s5="V1";
    /*(*h1).setId(s1);
    (*h2).setId(s2);
    (*A1).setId(s3);
    (*A2).setId(s4);
    (*P1).setNumPuerta(1);
    (*P1).setDisponible(true);
    (*P2).setNumPuerta(2);
    (*V1).setId(s5);
    (*V1).setAeronaveAsign(A1);*/
    TorreDeControl::getInstancia().añadirPuerta(P1);
    TorreDeControl::getInstancia().añadirPuerta(P2);
    TorreDeControl::getInstancia().añadirAeronave(A1);
    TorreDeControl::getInstancia().añadirAeronave(h1);
    TorreDeControl::getInstancia().añadirAeronave(A2);
    TorreDeControl::getInstancia().añadirAeronave(h2);
    (*V1).Embarcar();
    (*A1).despegar();
    cout<<"-------------------"<<endl;
    string Ub="panama";
    (*A1).reportarUbicacion(Ub);
    cout<<"-------------------"<<endl;
    cout<<(*((*V1).getPuertaAsign())).getNumPuerta()<<endl;
    return 0;
}
