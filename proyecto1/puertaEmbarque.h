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
    Vuelo* vueloActual;
    vector<Vuelo*> historial;
public:
    PuertaEmbarque();
    PuertaEmbarque(int numPuerta,string ubicacion, bool disponible);
    void añadirHistorial(Vuelo* historial1);
    // Métodos getters para atributos de PuertaEmbarque
    int getNumPuerta() ;
    string getUbicacion() ;
    bool getDisponible() ;
    vector<Vuelo*> getHistorial() ;
    Vuelo* getVueloActual() ;

    // Métodos setters para atributos de PuertaEmbarque
    void setNumPuerta(int numPuerta);
    void setUbicacion( string& ubicacion);
    void setDisponible(bool disponible);
    void setVueloActual( Vuelo *vuelo);
};


#endif