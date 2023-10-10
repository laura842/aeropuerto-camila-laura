#include "jetPrivado.h"

// Constructor de la clase JetPrivado que hereda de la clase Aeronave
JetPrivado::JetPrivado(string marca, string id, string modelo, int capacidad, int velocidadMax, string autonomia, int fechaFab, string estado, bool totalAsign, string propietario, vector<string> serviciosABordo, vector<string> destinosFrecuentes)
    : Aeronave(marca, id, modelo, capacidad, velocidadMax, autonomia, fechaFab, estado, totalAsign) {
    this->propietario = propietario;
    this->serviciosABordo = serviciosABordo;
    this->destinosFrecuentes = destinosFrecuentes;
}

// Métodos getters (obtenedores) para atributos de JetPrivado

// Método para obtener el propietario del jet privado
string JetPrivado::getPropietario() const {
    return propietario;
}

// Método para obtener los servicios a bordo disponibles en el jet privado
vector<string> JetPrivado::getServiciosABordo() const {
    return serviciosABordo;
}

// Método para obtener los destinos frecuentes del jet privado
vector<string> JetPrivado::getDestinosFrecuentes() const {
    return destinosFrecuentes;
}

// Métodos setters (establecedores) para atributos de JetPrivado

// Método para establecer el propietario del jet privado
void JetPrivado::setPropietario(const string& propietario) {
    this->propietario = propietario;
}

// Método para establecer los servicios a bordo disponibles en el jet privado
void JetPrivado::setServiciosABordo(const vector<string>& serviciosABordo) {
    this->serviciosABordo = serviciosABordo;
}

// Método para establecer los destinos frecuentes del jet privado
void JetPrivado::setDestinosFrecuentes(const vector<string>& destinosFrecuentes) {
    this->destinosFrecuentes = destinosFrecuentes;
}
