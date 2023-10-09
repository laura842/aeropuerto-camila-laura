#ifndef VUELO_H
#define VUELO_H
#include <iostream>
#include <vector>
#include <string>
#include "puertaEmbarque.h"
#include "tripulacion.h"
#include "aeronave.h"
#include "torreDeControl.h"
using namespace std;
//class TorreDeControl;
class Aeronave;
class PuertaEmbarque;
class Vuelo{
private:
    string id;
    string fecha;
    string origen;
    Aeronave* aeronaveAsign;
    PuertaEmbarque* puertaAsign;
    int sillasDisponibles;
    vector<Tripulacion* > tripAsignada;

public:
    Vuelo();
    Vuelo(string id, string fecha,string origen, int sillasDisponibles,vector<Tripulacion*> tripAsignada);
    void Embarcar();
        // Métodos getters para atributos de Vuelo
    string getId();
    string getFecha();
    string getOrigen();
    Aeronave* getAeronaveAsign();
    PuertaEmbarque* getPuertaAsign();
    int getSillasDisponibles();
    vector<Tripulacion*> getTripAsignada();

    // Métodos setters para atributos de Vuelo
    void setId(string& id);
    void setFecha(string& fecha);
    void setOrigen(string& origen);
    void setAeronaveAsign(Aeronave* aeronaveAsign);
    void setPuertaAsign(PuertaEmbarque* puertaAsign);
    void setSillasDisponibles(int sillasDisponibles);
    void setTripAsignada(vector<Tripulacion*> tripAsignada);
};
#endif