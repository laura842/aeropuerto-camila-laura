#include "persona.h"

Persona::Persona(string cedula, string nombre, string apellido, string fechaNacimiento, string genero, string direccion, string telefono, string correo) {
    this->cedula = cedula;
    this->nombre = nombre;
    this->apellido = apellido;
    this->fechaNacimiento = fechaNacimiento;
    this->genero = genero;
    this->direccion = direccion;
    this->telefono = telefono;
    this->correo = correo;
}

// Métodos getters para atributos de Persona
string Persona::getCedula() const {
    return cedula;
}

string Persona::getNombre() const {
    return nombre;
}

string Persona::getApellido() const {
    return apellido;
}

string Persona::getFechaNacimiento() const {
    return fechaNacimiento;
}

string Persona::getGenero() const {
    return genero;
}

string Persona::getDireccion() const {
    return direccion;
}

string Persona::getTelefono() const {
    return telefono;
}

string Persona::getCorreo() const {
    return correo;
}

// Métodos setters para atributos de Persona
void Persona::setCedula(const string& cedula) {
    this->cedula = cedula;
}

void Persona::setNombre(const string& nombre) {
    this->nombre = nombre;
}

void Persona::setApellido(const string& apellido) {
    this->apellido = apellido;
}

void Persona::setFechaNacimiento(const string& fechaNacimiento) {
    this->fechaNacimiento = fechaNacimiento;
}

void Persona::setGenero(const string& genero) {
    this->genero = genero;
}

void Persona::setDireccion(const string& direccion) {
    this->direccion = direccion;
}

void Persona::setTelefono(const string& telefono) {
    this->telefono = telefono;
}

void Persona::setCorreo(const string& correo) {
    this->correo = correo;
}