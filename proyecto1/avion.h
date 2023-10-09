#ifndef AVION_H
#define AVION_H
#include <iostream>
#include <vector>
#include <string>
#include "aeronave.h"
using namespace std;
class Avion : public Aeronave{
    private:
    int altitudMax;
    int motores;
    string categoria;
    public:
    Avion();
    Avion(string marca,string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign,vector<Vuelo> vuelosAsign,int altitudMax, int motores, string categoria);
    // Métodos getters para atributos de Avion
    int getAltitudMax() const;
    int getMotores() const;
    string getCategoria() const;

    // Métodos setters para atributos de Avion
    void setAltitudMax(int altitudMax);
    void setMotores(int motores);
    void setCategoria(const string& categoria);
};
#endif