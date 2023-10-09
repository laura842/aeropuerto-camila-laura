#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Persona{
private:
    string cedula;
    string nombre;
    string apellido;
    string fechaNacimiento;
    string genero;
    string direccion;
    string telefono;
    string correo;
public:
    Persona(string cedula,string nombre,string apellido,string fechaNacimiento,string genero,string direccion,string telefono,string correo);
       // Métodos getters
    string getCedula() const;
    string getNombre() const;
    string getApellido() const;
    string getFechaNacimiento() const;
    string getGenero() const;
    string getDireccion() const;
    string getTelefono() const;
    string getCorreo() const;

    // Métodos setters
    void setCedula(const string& cedula);
    void setNombre(const string& nombre);
    void setApellido(const string& apellido);
    void setFechaNacimiento(const string& fechaNacimiento);
    void setGenero(const string& genero);
    void setDireccion(const string& direccion);
    void setTelefono(const string& telefono);
    void setCorreo(const string& correo);
};

#endif