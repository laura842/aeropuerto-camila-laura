#include "pasajero.h"

// Constructor de la clase Pasajero que hereda de la clase Persona
Pasajero::Pasajero(string cedula, string nombre, string apellido, string fechaNacimiento, string genero, string direccion, string telefono, string correo, string nacionalidad, int maletas, string infoMedica)
    : Persona(cedula, nombre, apellido, fechaNacimiento, genero, direccion, telefono, correo) {
    this->nacionalidad = nacionalidad;
    this->maletas = maletas;
    this->infoMedica = infoMedica;
}

// Métodos getters (obtenedores) para atributos de Pasajero

// Método para obtener la nacionalidad del pasajero
string Pasajero::getNacionalidad() const {
    return nacionalidad;
}

// Método para obtener la cantidad de maletas del pasajero
int Pasajero::getMaletas() const {
    return maletas;
}

// Método para obtener la información médica del pasajero
string Pasajero::getInfoMedica() const {
    return infoMedica;
}

// Métodos setters (establecedores) para atributos de Pasajero

// Método para establecer la nacionalidad del pasajero
void Pasajero::setNacionalidad(const string& nacionalidad) {
    this->nacionalidad = nacionalidad;
}

// Método para establecer la cantidad de maletas del pasajero
void Pasajero::setMaletas(int maletas) {
    this->maletas = maletas;
}

// Método para establecer la información médica del pasajero
void Pasajero::setInfoMedica(const string& infoMedica) {
    this->infoMedica = infoMedica;
}

// Método para ver vuelos disponibles en un aeropuerto con ciertas especificaciones
void Pasajero::verVuelos(string fecha1, string origen, string destino) {
    Aeropuerto::getInstancia().verVuelos(fecha1, origen, destino);
}
