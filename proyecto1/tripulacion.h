#include <iostream>
#include <vector>
#include <string>
#include "persona.h"
using namespace std;
#ifndef TRIPULACION_H
#define TRIPULACION_H
class Tripulacion: public Persona{
    private:
        string puesto;
        int añosExp; 
        int maxHoras;

    public:
        Tripulacion(string cedula,string nombre,string apellido,string fechaNacimiento,string genero,string direccion,string telefono,string correo, string puesto,int añosExp, int maxHoras);
};

#endif