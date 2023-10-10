#ifndef AEROPUERTO_H
#define AEROPUERTO_H
#include<iostream>
#include<vector>
#include<string>
#include "aeronave.h"
#include "avion.h"
#include "jetPrivado.h"
#include "helicoptero.h"
#include "vuelo.h"
#include "pasajero.h"
using namespace std;
class Aeronave;
class Pasajero;
class Aeropuerto{
    private:
    vector<Aeronave*> aeronavesdisp;
    vector<Avion*> avionesDisp;
    vector<Helicoptero*> helicopterosDisp;
    vector<JetPrivado*> jetsDisp;
    vector<Vuelo*> vuelosDisp;
    vector<PuertaEmbarque*> puertasDisponibles;
    public:
    static Aeropuerto &getInstancia(){
        static Aeropuerto instancia;
        return instancia;
    }
    void verVuelos(string fecha1, string origen, string destino);
    void anadirAeronave (Aeronave* A);
    void anadirAvion (Avion* A);
    void anadirHelicoptero (Helicoptero* H);
    void anadirJet (JetPrivado* J);
    void anadirVuelo (Vuelo* V);
    void anadirPuerta (PuertaEmbarque* P);
    void reservarVuelo (string id, Pasajero* P);
    // Métodos getters
    vector<Aeronave*>& getAeronavesdisp();
    vector<Avion*>& getAvionesdisp();
    vector<Helicoptero*>& getHelicopterosdisp();
    vector<JetPrivado*>& getJetsdisp();
    vector<Vuelo*>& getVuelosDisp();
    vector<PuertaEmbarque*>& getPuertasDisponibles();

    // Métodos setters
    void setAeronavesdisp(vector<Aeronave*>& aeronavesdisp);
    void setVuelosDisp(vector<Vuelo*>& vuelosDisp);
    void setPuertasDisponibles(vector<PuertaEmbarque*>& puertasDisponibles);


};
#endif
