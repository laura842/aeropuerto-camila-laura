#ifndef PUERTAEMBARQUE_H
#define PUERTAEMBARQUE_H
#include <iostream>
#include <vector>
#include <string>
#include "vuelo.h"
using namespace std;
class Vuelo;
class PuertaEmbarque{
private:
    int numPuerta;
    string ubicacion;
    bool disponible;
    Vuelo vueloActual;
    vector<Vuelo> historial;
public:
    PuertaEmbarque();
    PuertaEmbarque(int numPuerta,string ubicacion, bool disponible);
    void añadirHistorial(const Vuelo& historial1);
    // Métodos getters para atributos de PuertaEmbarque
    int getNumPuerta() const;
    string getUbicacion() const;
    bool getDisponible() const;
    vector<Vuelo> getHistorial() const;
    Vuelo getVueloActual() const;

    // Métodos setters para atributos de PuertaEmbarque
    void setNumPuerta(int numPuerta);
    void setUbicacion(const string& ubicacion);
    void setDisponible(bool disponible);
    void setVueloActual(const Vuelo& vuelo);
};


#endif