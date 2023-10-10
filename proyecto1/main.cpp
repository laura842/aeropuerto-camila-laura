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
    Pasajero* P = new Pasajero("111","m","c","20","f","cr 89","22","cc","AA",3,"aa");
    Tripulacion* T1 = new Tripulacion("1111","Mc","c","1/10/2000","F","cra.23","111","aa","Asafata",2,8);
    Helicoptero* h1 = new Helicoptero("qqq","a0",1,2,"e",1222,"serv",false,2,1,"s");
    Helicoptero* h2= new Helicoptero("qqqq","a1",1,2,"e",1222,"serv",false,2,1,"s");
    Avion* A1 = new Avion("qq","aa",4,2,"a",22,"q0",false,1,2,"a");
    Avion* A2 = new Avion("qq","aa",4,2,"a",22,"q0",false,1,2,"a");
    PuertaEmbarque* P1 = new PuertaEmbarque(1,"helados",true);
    PuertaEmbarque* P2 = new PuertaEmbarque(2,"cafe",true);
    Vuelo* V1 = new Vuelo();
    A1->anadirVuelo(V1);
    Aeropuerto::getInstancia().anadirAeronave(A1);
    Aeropuerto::getInstancia().anadirVuelo(V1);
    Aeropuerto::getInstancia().anadirPuerta(P1);
    Aeropuerto::getInstancia().anadirPuerta(P2);
    P->verVuelos("9/10/23","cali","Bog");
    Aeropuerto::getInstancia().reservarVuelo("1",P);
    string s1="h1",s2="h2",s3="A1",s4="A2",s5="V1";
    (*h1).setId(s1);
    (*h2).setId(s2);
    (*A1).setId(s3);
    (*A2).setId(s4);
    (*P1).setNumPuerta(1);
    (*P1).setDisponible(true);
    (*P2).setNumPuerta(2);
    (*V1).setId(s5);
    (*V1).setAeronaveAsign(A1);
    TorreDeControl::getInstancia().añadirPuerta(P1);
    TorreDeControl::getInstancia().añadirPuerta(P2);
    TorreDeControl::getInstancia().añadirAeronave(A1);
    TorreDeControl::getInstancia().añadirAeronave(h1);
    TorreDeControl::getInstancia().añadirAeronave(A2);
    TorreDeControl::getInstancia().añadirAeronave(h2);
    (*A1).despegar();
    (*V1).Embarcar();
    cout<<"-------------------"<<endl;
    string Ub="panama";
    (*A1).reportarUbicacion(Ub);
    cout<<"-------------------"<<endl;
    cout<<(*((*V1).getPuertaAsign())).getNumPuerta()<<endl;
    return 0;
}
