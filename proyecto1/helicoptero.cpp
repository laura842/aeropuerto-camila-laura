#include "helicoptero.h"

// Constructor de la clase Helicoptero, que hereda de la clase Aeronave
Helicoptero::Helicoptero(string marca, string id, string modelo, int capacidad, int velocidadMax, string autonomia, int fechaFab, string estado, bool totalAsign, int rotores, int capElevacion, string usoEspecifico)
    : Aeronave(marca, id, modelo, capacidad, velocidadMax, autonomia, fechaFab, estado, totalAsign) {
    this->rotores = rotores;
    this->capElevacion = capElevacion;
    this->usoEspecifico = usoEspecifico;
}

// Métodos getters (obtenedores) para atributos de Helicoptero

// Método para obtener la cantidad de rotores del helicóptero
int Helicoptero::getRotores() const {
    return rotores;
}

// Método para obtener la capacidad de elevación del helicóptero
int Helicoptero::getCapElevacion() const {
    return capElevacion;
}

// Método para obtener el uso específico del helicóptero
string Helicoptero::getUsoEspecifico() const {
    return usoEspecifico;
}

// Métodos setters (establecedores) para atributos de Helicoptero

// Método para establecer la cantidad de rotores del helicóptero
void Helicoptero::setRotores(int rotores) {
    this->rotores = rotores;
}

// Método para establecer la capacidad de elevación del helicóptero
void Helicoptero::setCapElevacion(int capElevacion) {
    this->capElevacion = capElevacion;
}

// Método para establecer el uso específico del helicóptero
void Helicoptero::setUsoEspecifico(const string& usoEspecifico) {
    this->usoEspecifico = usoEspecifico;
}
