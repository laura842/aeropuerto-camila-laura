#include <iostream>
#include <vector>
#include <string>
#include "aeronave.h"
using namespace std;
#ifndef JET_H
#define JET_H
class jetPrivado : public Aeronave{
    private:
    string Propietario;
    vector<string> serviciosABordo;
    vector<string> destinosFrecuentes;
    public:
    jetPrivado(string marca,string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign,vector<Vuelo> vuelosAsign,string propietario,vector<string> serviciosABordo, vector<string> destinosFrecuentes);
};
#endif