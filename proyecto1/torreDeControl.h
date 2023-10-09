#ifndef TORRE_H
#define TORRE_H
#include <iostream>
#include <vector>
#include <string>
#include "aeronave.h"
#include "puertaEmbarque.h"
using namespace std;
class Aeronave;
class TorreDeControl{
    private:
    vector<Aeronave> notificacion;
    vector<PuertaEmbarque> puertas;
    void notificar(Aeronave* A, string mensaje);
    public:
    static TorreDeControl &getInstancia(){
        static TorreDeControl instancia;
        return instancia;
    }
    void añadirAeronave(Aeronave &A);
    void añadirPuerta (PuertaEmbarque &P);
    void asignarPuerta (Vuelo* V);
    void aeronaveDespega(Aeronave* A);
    void aeronaveAterriza(Aeronave* A);
    void aeronaveComparte(Aeronave* A, string &mensaje);
};
#endif