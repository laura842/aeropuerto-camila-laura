#include <iostream>
#include <vector>
#include <string>
#include "vuelo.h"
using namespace std;
#ifndef AERONAVE_H
#define AERONAVE_H

class Aeronave{
    private:
    string marca;
    string modelo;
    int capacidad;
    int velocidadMax;
    string autonomia;
    int fechaFab;
    string estado;
    bool totalAsign;
    vector<Vuelo> vuelosAsign;
    public:
    Aeronave(string marca,string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign,vector<Vuelo> vuelosAsign);
    void reportarUbicacion();
    void despegar();
    void Aterrizar();
};
#endif