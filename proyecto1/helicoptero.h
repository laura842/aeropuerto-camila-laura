#ifndef HELICOPTERO_H
#define HELICOPTERO_H
#include <iostream>
#include <vector>
#include <string>
#include "aeronave.h"
using namespace std;

class Helicoptero : public Aeronave{
    private:
    int rotores;
    int capElevacion;
    string usoEspecifico;
    public:
    Helicoptero();
    Helicoptero(string marca,string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign,vector<Vuelo> vuelosAsign,int rotores, int capElevacion, string usoEspecifico);
    // Métodos getters para atributos de Helicoptero
    int getRotores() const;
    int getCapElevacion() const;
    string getUsoEspecifico() const;

    // Métodos setters para atributos de Helicoptero
    void setRotores(int rotores);
    void setCapElevacion(int capElevacion);
    void setUsoEspecifico(const string& usoEspecifico);

};
#endif