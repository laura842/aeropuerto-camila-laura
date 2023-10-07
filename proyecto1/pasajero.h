#include <iostream>
#include <vector>
#include <string>
#include "persona.h"
using namespace std;
#ifndef PASAJERO_H
#define PASAJERO_H
class  Pasajero: public Persona{
    private:
        string nacionalidad;
        int maletas; 
        string infoMedica;

    public:
        Pasajero(string cedula,string nombre,string apellido,string fechaNacimiento,string genero,string direccion,string telefono,string correo, string nacionalidad,int maletas, string infoMedica);
};

#endif