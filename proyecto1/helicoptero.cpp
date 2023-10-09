#include "helicoptero.h"

// Constructor de Helicoptero
Helicoptero::Helicoptero(string marca, string modelo, int capacidad, int velocidadMax, string autonomia, int fechaFab, string estado, bool totalAsign, vector<Vuelo> vuelosAsign, int rotores, int capElevacion, string usoEspecifico)
    : Aeronave(marca, modelo, capacidad, velocidadMax, autonomia, fechaFab, estado, totalAsign, vuelosAsign) {
    this->rotores = rotores;
    this->capElevacion = capElevacion;
    this->usoEspecifico = usoEspecifico;
}

// Métodos getters para atributos de Helicoptero
int Helicoptero::getRotores() const {
    return rotores;
}

int Helicoptero::getCapElevacion() const {
    return capElevacion;
}

string Helicoptero::getUsoEspecifico() const {
    return usoEspecifico;
}

// Métodos setters para atributos de Helicoptero
void Helicoptero::setRotores(int rotores) {
    this->rotores = rotores;
}

void Helicoptero::setCapElevacion(int capElevacion) {
    this->capElevacion = capElevacion;
}

void Helicoptero::setUsoEspecifico(const string& usoEspecifico) {
    this->usoEspecifico = usoEspecifico;
}
