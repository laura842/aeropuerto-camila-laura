#ifndef AEROPUERTO_H
#define AEROPUERTO_H
#include<iostream>
#include<vector>
#include<string>
#include "aeronave.h"
#include "vuelo.h"
#include "pasajero.h"
using namespace std;
class Aeronave;
class Pasajero;
class Aeropuerto{
    private:
    vector<Aeronave*> aeronavesdisp;
    vector<Vuelo*> vuelosDisp;
    vector<PuertaEmbarque*> puertasDisponibles;
    public:
    static Aeropuerto &getInstancia(){
        static Aeropuerto instancia;
        return instancia;
    }
    void verVuelos(string fecha1, string origen, string destino);
    void anadirAeronave (Aeronave* A);
    void anadirVuelo (Vuelo* V);
    void anadirPuerta (PuertaEmbarque* P);
    void reservarVuelo (string id, Pasajero* P);
    // Métodos getters
    vector<Aeronave*>& getAeronavesdisp();
    vector<Vuelo*>& getVuelosDisp();
    vector<PuertaEmbarque*>& getPuertasDisponibles();

    // Métodos setters
    void setAeronavesdisp(vector<Aeronave*>& aeronavesdisp);
    void setVuelosDisp(vector<Vuelo*>& vuelosDisp);
    void setPuertasDisponibles(vector<PuertaEmbarque*>& puertasDisponibles);


};
#endif
