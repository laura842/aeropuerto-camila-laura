#include "aeropuerto.h"
#include "aeronave.h"

using namespace std;

// Implementación de los métodos getters

// Método para obtener la lista de aeronaves disponibles en el aeropuerto
vector<Aeronave*>& Aeropuerto::getAeronavesdisp() {
    return aeronavesdisp;
}

// Método para obtener la lista de vuelos disponibles en el aeropuerto
vector<Vuelo*>& Aeropuerto::getVuelosDisp() {
    return vuelosDisp;
}

// Método para obtener la lista de puertas de embarque disponibles en el aeropuerto
vector<PuertaEmbarque*>& Aeropuerto::getPuertasDisponibles() {
    return puertasDisponibles;
}

// Implementación de los métodos setters

// Método para establecer la lista de aeronaves disponibles en el aeropuerto
void Aeropuerto::setAeronavesdisp(vector<Aeronave*>& aeronavesdisp) {
    this->aeronavesdisp = aeronavesdisp;
}

// Método para establecer la lista de vuelos disponibles en el aeropuerto
void Aeropuerto::setVuelosDisp(vector<Vuelo*>& vuelosDisp) {
    this->vuelosDisp = vuelosDisp;
}

// Método para establecer la lista de puertas de embarque disponibles en el aeropuerto
void Aeropuerto::setPuertasDisponibles(vector<PuertaEmbarque*>& puertasDisponibles) {
    this->puertasDisponibles = puertasDisponibles;
}

// Método para agregar una aeronave a la lista de aeronaves disponibles en el aeropuerto
void Aeropuerto::anadirAeronave(Aeronave* A) {
    aeronavesdisp.push_back(A);
}

// Método para agregar un vuelo a la lista de vuelos disponibles en el aeropuerto
void Aeropuerto::anadirVuelo(Vuelo* V) {
    vuelosDisp.push_back(V);
}

// Método para agregar una puerta de embarque a la lista de puertas de embarque disponibles en el aeropuerto
void Aeropuerto::anadirPuerta(PuertaEmbarque* P) {
    puertasDisponibles.push_back(P);
}

// Método para buscar vuelos disponibles con ciertas especificaciones
void Aeropuerto::verVuelos(string fecha1, string origen, string destino) {
    int contador = 0;
    for (int i = 0; i < vuelosDisp.size(); i++) {
        if (vuelosDisp[i]->getOrigen() == origen && vuelosDisp[i]->getDestino() == destino && vuelosDisp[i]->getFecha() == fecha1) {
            cout << "El vuelo " << vuelosDisp[i]->getId() << " se encuentra disponible en la fecha " << fecha1 << " con destino a " << destino << endl;
            contador++;
        }
    }
    if (contador == 0) {
        cout << "No hay vuelos con esas especificaciones disponibles por el momento" << endl;
    }
}

// Método para reservar un asiento en un vuelo dado
void Aeropuerto::reservarVuelo(string id, Pasajero* P) {
    int count = 0;
    for (int i = 0; i < vuelosDisp.size(); i++) {
        if (vuelosDisp[i]->getId() == id) {
            if (vuelosDisp[i]->getSillasDisponibles() > 0) {
                vuelosDisp[i]->anadirPasajero(P);
                cout << "Vuelo reservado correctamente" << endl;
            } else {
                cout << "No hay sillas disponibles para el vuelo " << id << endl;
            }
            count = 1;
        }
    }
    if (count == 0) {
        cout << "No existe un vuelo con el id " << id << endl;
    }
}
