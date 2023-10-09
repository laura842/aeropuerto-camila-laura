#include "tripulacion.h"

Tripulacion::Tripulacion(string cedula, string nombre, string apellido, string fechaNacimiento, string genero, string direccion, string telefono, string correo, string puesto, int añosExp, int maxHoras)
    : Persona(cedula, nombre, apellido, fechaNacimiento, genero, direccion, telefono, correo) {
    this->puesto = puesto;
    this->añosExp = añosExp;
    this->maxHoras = maxHoras;
}

// Métodos getters para atributos de Tripulacion
string Tripulacion::getPuesto() const {
    return puesto;
}

int Tripulacion::getAñosExp() const {
    return añosExp;
}

int Tripulacion::getMaxHoras() const {
    return maxHoras;
}

// Métodos setters para atributos de Tripulacion
void Tripulacion::setPuesto(const string& puesto) {
    this->puesto = puesto;
}

void Tripulacion::setAñosExp(int añosExp) {
    this->añosExp = añosExp;
}

void Tripulacion::setMaxHoras(int maxHoras) {
    this->maxHoras = maxHoras;
}