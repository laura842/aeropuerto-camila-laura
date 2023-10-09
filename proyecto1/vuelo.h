#ifndef VUELO_H
#define VUELO_H
#include <iostream>
#include <vector>
#include <string>
#include "puertaEmbarque.h"
#include "tripulacion.h"
#include "aeronave.h"
using namespace std;
class Aeronave;
class PuertaEmbarque;
class Vuelo{
private:
    string id;
    string fecha;
    string origen;
    Aeronave aeronaveAsign;
    PuertaEmbarque puertaAsign;
    int sillasDisponibles;
    vector<Tripulacion> tripAsignada;

public:
    Vuelo();
    Vuelo(string id, string fecha,string origen, int sillasDisponibles,vector<Tripulacion> tripAsignada);
    void Embarcar();
        // Métodos getters para atributos de Vuelo
    string getId() const;
    string getFecha() const;
    string getOrigen() const;
    Aeronave getAeronaveAsign() const;
    PuertaEmbarque getPuertaAsign() const;
    int getSillasDisponibles() const;
    vector<Tripulacion> getTripAsignada() const;

    // Métodos setters para atributos de Vuelo
    void setId(const string& id);
    void setFecha(const string& fecha);
    void setOrigen(const string& origen);
    void setAeronaveAsign(const Aeronave& aeronaveAsign);
    void setPuertaAsign(const PuertaEmbarque& puertaAsign);
    void setSillasDisponibles(int sillasDisponibles);
    void setTripAsignada(const vector<Tripulacion>& tripAsignada);
};
#endif