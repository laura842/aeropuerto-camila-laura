#include "avion.h"

// Constructor de la clase Avion, que hereda de la clase Aeronave
Avion::Avion(string marca, string id, string modelo, int capacidad, int velocidadMax, string autonomia, int fechaFab, string estado, bool totalAsign, int altitudMax, int motores, string categoria)
    : Aeronave(marca, id, modelo, capacidad, velocidadMax, autonomia, fechaFab, estado, totalAsign) {
    this->altitudMax = altitudMax;
    this->motores = motores;
    this->categoria = categoria;
}

// Métodos getters (obtenedores) para atributos de Avion

// Método para obtener la altitud máxima a la que puede volar el avión
int Avion::getAltitudMax() const {
    return altitudMax;
}

// Método para obtener la cantidad de motores del avión
int Avion::getMotores() const {
    return motores;
}

// Método para obtener la categoría del avión (por ejemplo, "comercial", "privado", etc.)
string Avion::getCategoria() const {
    return categoria;
}

// Métodos setters (establecedores) para atributos de Avion

// Método para establecer la altitud máxima a la que puede volar el avión
void Avion::setAltitudMax(int altitudMax) {
    this->altitudMax = altitudMax;
}

// Método para establecer la cantidad de motores del avión
void Avion::setMotores(int motores) {
    this->motores = motores;
}

// Método para establecer la categoría del avión
void Avion::setCategoria(const string& categoria) {
    this->categoria = categoria;
}
