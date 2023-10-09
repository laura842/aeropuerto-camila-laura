#include "avion.h"

Avion::Avion(string marca, string modelo, int capacidad, int velocidadMax, string autonomia, int fechaFab, string estado, bool totalAsign, int altitudMax, int motores, string categoria)
    : Aeronave(marca, modelo, capacidad, velocidadMax, autonomia, fechaFab, estado, totalAsign) {
    this->altitudMax = altitudMax;
    this->motores = motores;
    this->categoria = categoria;
}

// Métodos getters para atributos de Avion
int Avion::getAltitudMax() const {
    return altitudMax;
}

int Avion::getMotores() const {
    return motores;
}

string Avion::getCategoria() const {
    return categoria;
}

// Métodos setters para atributos de Avion
void Avion::setAltitudMax(int altitudMax) {
    this->altitudMax = altitudMax;
}

void Avion::setMotores(int motores) {
    this->motores = motores;
}

void Avion::setCategoria(const string& categoria) {
    this->categoria = categoria;
}