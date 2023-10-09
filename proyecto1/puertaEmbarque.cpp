#include "puertaEmbarque.h"

PuertaEmbarque::PuertaEmbarque(int numPuerta, string ubicacion, bool disponible)
    : numPuerta(numPuerta), ubicacion(ubicacion), disponible(disponible) {
    // Puedes agregar otras inicializaciones según sea necesario.
}

// Métodos getters para atributos de PuertaEmbarque
Vuelo PuertaEmbarque::getVueloActual() const{
    return vueloActual;
}


int PuertaEmbarque::getNumPuerta() const {
    return numPuerta;
}

string PuertaEmbarque::getUbicacion() const {
    return ubicacion;
}

bool PuertaEmbarque::getDisponible() const {
    return disponible;
}

vector<Vuelo> PuertaEmbarque::getHistorial() const {
    return historial;
}

// Métodos setters para atributos de PuertaEmbarque
void PuertaEmbarque::setVueloActual(const Vuelo &vuelo){
    this->vueloActual=vuelo;
}

void PuertaEmbarque::setNumPuerta(int numPuerta) {
    this->numPuerta = numPuerta;
}

void PuertaEmbarque::setUbicacion(const string& ubicacion) {
    this->ubicacion = ubicacion;
}

void PuertaEmbarque::setDisponible(bool disponible) {
    this->disponible = disponible;
}

void PuertaEmbarque::añadirHistorial(const Vuelo& historial1) {
    historial.push_back(historial1);
}