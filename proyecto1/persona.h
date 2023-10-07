#include <iostream>
#include <vector>
#include <string>
using namespace std;
#ifndef PERSONA_H
#define PERSONA_H
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
};

#endif