#ifndef TRIPULACION_H
#define TRIPULACION_H
#include <iostream>
#include <vector>
#include <string>
#include "persona.h"
using namespace std;
class Tripulacion: public Persona{
    private:
        string puesto;
        int añosExp; 
        int maxHoras;

    public:
        Tripulacion(string cedula,string nombre,string apellido,string fechaNacimiento,string genero,string direccion,string telefono,string correo, string puesto,int añosExp, int maxHoras);
        // Métodos getters para atributos de Tripulacion
        string getPuesto() const;
        int getAñosExp() const;
        int getMaxHoras() const;

        // Métodos setters para atributos de Tripulacion
        void setPuesto(const string& puesto);
        void setAñosExp(int añosExp);
        void setMaxHoras(int maxHoras);
};

#endif