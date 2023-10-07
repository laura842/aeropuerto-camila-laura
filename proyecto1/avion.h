#include <iostream>
#include <vector>
#include <string>
#include "aeronave.h"
using namespace std;
#ifndef AVION_H
#define AVION_H
class Avion : public Aeronave{
    private:
    int altitudMax;
    int motores;
    string categoria;
    public:
    Avion(string marca,string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign,vector<Vuelo> vuelosAsign,int altitudMax, int motores, string categoria);
};
#endif