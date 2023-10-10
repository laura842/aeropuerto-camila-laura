#include "puertaEmbarque.h"

// Constructor de la clase PuertaEmbarque
PuertaEmbarque::PuertaEmbarque(int numPuerta, string ubicacion, bool disponible)
    : numPuerta(numPuerta), ubicacion(ubicacion), disponible(disponible) {
    // Puedes agregar otras inicializaciones según sea necesario.
}

// Métodos getters (obtenedores) para atributos de PuertaEmbarque

// Método para obtener el vuelo actual asignado a la puerta de embarque
Vuelo* PuertaEmbarque::getVueloActual() {
    return vueloActual;
}

// Método para obtener el número de la puerta de embarque
int PuertaEmbarque::getNumPuerta() {
    return numPuerta;
}

// Método para obtener la ubicación de la puerta de embarque
string PuertaEmbarque::getUbicacion() {
    return ubicacion;
}

// Método para obtener el estado de disponibilidad de la puerta de embarque
bool PuertaEmbarque::getDisponible() {
    return disponible;
}

// Método para obtener el historial de vuelos que han utilizado la puerta de embarque
vector<Vuelo*> PuertaEmbarque::getHistorial() {
    return historial;
}

// Métodos setters (establecedores) para atributos de PuertaEmbarque

// Método para establecer el vuelo actual asignado a la puerta de embarque
void PuertaEmbarque::setVueloActual(Vuelo* vuelo) {
    this->vueloActual = vuelo;
}

// Método para establecer el número de la puerta de embarque
void PuertaEmbarque::setNumPuerta(int numPuerta) {
    this->numPuerta = numPuerta;
}

// Método para establecer la ubicación de la puerta de embarque
void PuertaEmbarque::setUbicacion(string& ubicacion) {
    this->ubicacion = ubicacion;
}

// Método para establecer el estado de disponibilidad de la puerta de embarque
void PuertaEmbarque::setDisponible(bool disponible) {
    this->disponible = disponible;
}

// Método para agregar un vuelo al historial de la puerta de embarque
void PuertaEmbarque::añadirHistorial(Vuelo* historial1) {
    historial.push_back(historial1);
}
