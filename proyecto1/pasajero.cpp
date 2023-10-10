#include "pasajero.h"

Pasajero::Pasajero(string cedula, string nombre, string apellido, string fechaNacimiento, string genero, string direccion, string telefono, string correo, string nacionalidad, int maletas, string infoMedica)
    : Persona(cedula, nombre, apellido, fechaNacimiento, genero, direccion, telefono, correo) {
    this->nacionalidad = nacionalidad;
    this->maletas = maletas;
    this->infoMedica = infoMedica;
}

// Métodos getters para atributos de Pasajero
string Pasajero::getNacionalidad() const {
    return nacionalidad;
}

int Pasajero::getMaletas() const {
    return maletas;
}

string Pasajero::getInfoMedica() const {
    return infoMedica;
}

// Métodos setters para atributos de Pasajero
void Pasajero::setNacionalidad(const string& nacionalidad) {
    this->nacionalidad = nacionalidad;
}

void Pasajero::setMaletas(int maletas) {
    this->maletas = maletas;
}

void Pasajero::setInfoMedica(const string& infoMedica) {
    this->infoMedica = infoMedica;
}

void Pasajero::verVuelos(string fecha1,string origen,string destino){
    Aeropuerto::getInstancia().verVuelos(fecha1,origen,destino);
}
