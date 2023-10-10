#ifndef VUELO_H
#define VUELO_H
#include <iostream>
#include <vector>
#include <string>
#include "puertaEmbarque.h"
#include "tripulacion.h"
#include "aeronave.h"
#include "torreDeControl.h"
#include "pasajero.h"
using namespace std;
//class TorreDeControl;
class Pasajero;
class Aeronave;
class PuertaEmbarque;
class Vuelo{
private:
    string id;
    string fecha;
    string origen;
    string destino;
    Aeronave* aeronaveAsign;
    PuertaEmbarque* puertaAsign;
    int sillasDisponibles;
    vector<Tripulacion* > tripAsignada;
    vector<Pasajero* > pasajerosVuelo;

public:
    Vuelo();
    Vuelo(string id, string fecha,string origen,string destino, int sillasDisponibles,vector<Tripulacion*> tripAsignada);
    void Embarcar();
    void anadirPasajero(Pasajero* P);
        // Métodos getters para atributos de Vuelo
    string getId();
    string getFecha();
    string getOrigen();
    string getDestino();
    Aeronave* getAeronaveAsign();
    PuertaEmbarque* getPuertaAsign();
    int getSillasDisponibles();
    vector<Tripulacion*> getTripAsignada();
    vector<Pasajero* > getPasajerosVuelo();

    // Métodos setters para atributos de Vuelo
    void setId(string& id);
    void setFecha(string& fecha);
    void setOrigen(string& origen);
    void setAeronaveAsign(Aeronave* aeronaveAsign);
    void setPuertaAsign(PuertaEmbarque* puertaAsign);
    void setSillasDisponibles(int sillasDisponibles);
    void setTripAsignada(vector<Tripulacion*> tripAsignada);
    void setDestino (string& destino);
};
#endif