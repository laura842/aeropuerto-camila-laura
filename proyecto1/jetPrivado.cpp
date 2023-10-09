#include "jetPrivado.h"

// Constructor de JetPrivado
JetPrivado::JetPrivado(string marca, string modelo, int capacidad, int velocidadMax, string autonomia, int fechaFab, string estado, bool totalAsign, vector<Vuelo> vuelosAsign, string propietario, vector<string> serviciosABordo, vector<string> destinosFrecuentes)
    : Aeronave(marca, modelo, capacidad, velocidadMax, autonomia, fechaFab, estado, totalAsign, vuelosAsign) {
    this->propietario = propietario;
    this->serviciosABordo = serviciosABordo;
    this->destinosFrecuentes = destinosFrecuentes;
}

// Métodos getters para atributos de JetPrivado
string JetPrivado::getPropietario() const {
    return propietario;
}

vector<string> JetPrivado::getServiciosABordo() const {
    return serviciosABordo;
}

vector<string> JetPrivado::getDestinosFrecuentes() const {
    return destinosFrecuentes;
}

// Métodos setters para atributos de JetPrivado
void JetPrivado::setPropietario(const string& propietario) {
    this->propietario = propietario;
}

void JetPrivado::setServiciosABordo(const vector<string>& serviciosABordo) {
    this->serviciosABordo = serviciosABordo;
}

void JetPrivado::setDestinosFrecuentes(const vector<string>& destinosFrecuentes) {
    this->destinosFrecuentes = destinosFrecuentes;
}