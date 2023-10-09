#include "puertaEmbarque.h"

PuertaEmbarque::PuertaEmbarque(int numPuerta, string ubicacion, bool disponible)
    : numPuerta(numPuerta), ubicacion(ubicacion), disponible(disponible) {
    // Puedes agregar otras inicializaciones según sea necesario.
}

// Métodos getters para atributos de PuertaEmbarque
Vuelo* PuertaEmbarque::getVueloActual() {
    return vueloActual;
}


int PuertaEmbarque::getNumPuerta()  {
    return numPuerta;
}

string PuertaEmbarque::getUbicacion()  {
    return ubicacion;
}

bool PuertaEmbarque::getDisponible()  {
    return disponible;
}

vector<Vuelo*> PuertaEmbarque::getHistorial()  {
    return historial;
}

// Métodos setters para atributos de PuertaEmbarque
void PuertaEmbarque::setVueloActual( Vuelo *vuelo){
    this->vueloActual=vuelo;
}

void PuertaEmbarque::setNumPuerta(int numPuerta) {
    this->numPuerta = numPuerta;
}

void PuertaEmbarque::setUbicacion( string& ubicacion) {
    this->ubicacion = ubicacion;
}

void PuertaEmbarque::setDisponible(bool disponible) {
    this->disponible = disponible;
}

void PuertaEmbarque::añadirHistorial(Vuelo* historial1) {
    historial.push_back(historial1);
}