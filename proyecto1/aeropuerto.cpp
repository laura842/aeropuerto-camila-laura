#include "aeropuerto.h"
#include "aeronave.h"

using namespace std;

// Implementación de los métodos getters
vector<Aeronave*>& Aeropuerto::getAeronavesdisp() {
    return aeronavesdisp;
}

vector<Vuelo*>& Aeropuerto::getVuelosDisp() {
    return vuelosDisp;
}

vector<PuertaEmbarque*>& Aeropuerto::getPuertasDisponibles() {
    return puertasDisponibles;
}

// Implementación de los métodos setters
void Aeropuerto::setAeronavesdisp(vector<Aeronave*>& aeronavesdisp) {
    this->aeronavesdisp = aeronavesdisp;
}

void Aeropuerto::setVuelosDisp(vector<Vuelo*>& vuelosDisp) {
    this->vuelosDisp = vuelosDisp;
}

void Aeropuerto::setPuertasDisponibles(vector<PuertaEmbarque*>& puertasDisponibles) {
    this->puertasDisponibles = puertasDisponibles;
}

void Aeropuerto:: anadirAeronave (Aeronave* A){
    aeronavesdisp.push_back(A);
}

void Aeropuerto::anadirVuelo (Vuelo* V){
    vuelosDisp.push_back(V);
}

void Aeropuerto::anadirPuerta (PuertaEmbarque* P){
    puertasDisponibles.push_back(P);
}

void Aeropuerto::verVuelos (string fecha1, string origen, string destino){
    int contador = 0;
    for(int i=0;i<vuelosDisp.size();i++){
        if (vuelosDisp[i]->getOrigen()==origen and vuelosDisp[i]->getDestino()==destino and vuelosDisp[i]->getFecha()==fecha1){
            cout<<"El vuelo "<<vuelosDisp[i]->getId()<<" se encuentra disponible"<<endl;
            contador++;
        }
    }
    if (contador==0){
        cout<<"No hay vuelos con esas especificaciones disponibles por el momento"<<endl;
    }
}

void Aeropuerto::reservarVuelo(string id,Pasajero* P){
    int count=0;
    for (int i=0;i<vuelosDisp.size();i++){
        if (vuelosDisp[i]->getId()==id){
            if (vuelosDisp[i]->getSillasDisponibles()>0){
                vuelosDisp[i]->anadirPasajero(P);
            }
            else {
                cout<<"No hay sillas disponibles para el vuelo "<<id<<endl;
            }
            count=1;
        }
    }
    if (count=0){
        cout<<"No existe un vuelo con el id "<<id<<endl;
    }
}