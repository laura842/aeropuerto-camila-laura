#ifndef PASAJERO_H
#define PASAJERO_H
#include <iostream>
#include <vector>
#include <string>
#include "persona.h"
#include "aeropuerto.h"
using namespace std;
class  Pasajero: public Persona{
    private:
        string nacionalidad;
        int maletas; 
        string infoMedica;

    public:
        Pasajero(string cedula,string nombre,string apellido,string fechaNacimiento,string genero,string direccion,string telefono,string correo, string nacionalidad,int maletas, string infoMedica);
        void verVuelos(string fecha1,string origen,string destino);
        // Métodos getters para atributos de Pasajero
        string getNacionalidad() const;
        int getMaletas() const;
        string getInfoMedica() const;

        // Métodos setters para atributos de Pasajero
        void setNacionalidad(const string& nacionalidad);
        void setMaletas(int maletas);
        void setInfoMedica(const string& infoMedica);
};

#endif