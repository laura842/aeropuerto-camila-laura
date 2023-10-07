#include <iostream>
#include <vector>
#include <string>
#include "PuertaEmbarque.h"
using namespace std;
#ifndef VUELO_H
#define VUELO_H
class Vuelo{
private:
    string id;
    string fecha;
    string origen;
    Aeronave aeronaveAsign;
    PuertaEmbarque puertaAsign;
    //FALTA LA TRIPULACION

public:
    Vuelo(string id, string fecha,string origen,Aeronave aeronaveAsign);
};
#endif