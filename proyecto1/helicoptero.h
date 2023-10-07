#include <iostream>
#include <vector>
#include <string>
#include "aeronave.h"
using namespace std;
#ifndef HELICOPTERO_H
#define HELICOPTERO_H
class Helicoptero : public Aeronave{
    private:
    int rotores;
    int capElevacion;
    string usoEspecifico;
    public:
    Helicoptero(string marca,string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign,vector<Vuelo> vuelosAsign,int rotores, int capElevacion, string usoEspecifico);
};
#endif