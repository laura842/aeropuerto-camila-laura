#include "persona.h"

// Constructor de la clase Persona
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

// Métodos getters (obtenedores) para atributos de Persona

// Método para obtener la cédula de la persona
string Persona::getCedula() const {
    return cedula;
}

// Método para obtener el nombre de la persona
string Persona::getNombre() const {
    return nombre;
}

// Método para obtener el apellido de la persona
string Persona::getApellido() const {
    return apellido;
}

// Método para obtener la fecha de nacimiento de la persona
string Persona::getFechaNacimiento() const {
    return fechaNacimiento;
}

// Método para obtener el género de la persona
string Persona::getGenero() const {
    return genero;
}

// Método para obtener la dirección de la persona
string Persona::getDireccion() const {
    return direccion;
}

// Método para obtener el número de teléfono de la persona
string Persona::getTelefono() const {
    return telefono;
}

// Método para obtener el correo electrónico de la persona
string Persona::getCorreo() const {
    return correo;
}

// Métodos setters (establecedores) para atributos de Persona

// Método para establecer la cédula de la persona
void Persona::setCedula(const string& cedula) {
    this->cedula = cedula;
}

// Método para establecer el nombre de la persona
void Persona::setNombre(const string& nombre) {
    this->nombre = nombre;
}

// Método para establecer el apellido de la persona
void Persona::setApellido(const string& apellido) {
    this->apellido = apellido;
}

// Método para establecer la fecha de nacimiento de la persona
void Persona::setFechaNacimiento(const string& fechaNacimiento) {
    this->fechaNacimiento = fechaNacimiento;
}

// Método para establecer el género de la persona
void Persona::setGenero(const string& genero) {
    this->genero = genero;
}

// Método para establecer la dirección de la persona
void Persona::setDireccion(const string& direccion) {
    this->direccion = direccion;
}

// Método para establecer el número de teléfono de la persona
void Persona::setTelefono(const string& telefono) {
    this->telefono = telefono;
}

// Método para establecer el correo electrónico de la persona
void Persona::setCorreo(const string& correo) {
    this->correo = correo;
}
