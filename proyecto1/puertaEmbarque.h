#include <iostream>
#include <vector>
#include <string>
using namespace std;
#ifndef PUERTAEMBARQUE_H
#define PUERTAEMBARQUE_H

class PuertaEmbarque
{
private:
    int numPuerta;
    string ubicacion;
    bool disponible;
    vector<Vuelo> historial;
public:
    PuertaEmbarque(int numPuerta,string ubicacion, bool disponible, vector<Vuelo> historial);
    
};


#endif