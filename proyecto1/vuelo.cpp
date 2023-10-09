#include "vuelo.h"
#include "torreDeControl.h"
#include "puertaEmbarque.h"
// Constructor de Vuelo
Vuelo::Vuelo(string id, string fecha, string origen,int sillasDisponibles,vector<Tripulacion*> tripAsignada){
    this->id = id;
    this->fecha = fecha;
    this->origen = origen;
   // this->aeronaveAsign = aeronaveAsign;
    this->sillasDisponibles = sillasDisponibles; 
    this->tripAsignada = tripAsignada;
}
Vuelo::Vuelo(){
    this->id = 1;
    this->fecha = "9/10/23";
    this->origen = "cali";
   // this->aeronaveAsign = aeronaveAsign;
    this->sillasDisponibles = 40; 
   // this->tripAsignada = NULL; 
}

// Métodos getters para atributos de Vuelo
string Vuelo::getId(){
    return id;
}

string Vuelo::getFecha() {
    return fecha;
}

string Vuelo::getOrigen(){
    return origen;
}

Aeronave* Vuelo::getAeronaveAsign(){
    return aeronaveAsign;
}

PuertaEmbarque* Vuelo::getPuertaAsign(){
    return puertaAsign;
}

int Vuelo::getSillasDisponibles(){
    return sillasDisponibles;
}

vector<Tripulacion*> Vuelo::getTripAsignada(){
    return tripAsignada;
}

// Métodos setters para atributos de Vuelo
void Vuelo::setId(string& id) {
    this->id = id;
}

void Vuelo::setFecha(string& fecha) {
    this->fecha = fecha;
}

void Vuelo::setOrigen(string& origen) {
    this->origen = origen;
}

void Vuelo::setAeronaveAsign(Aeronave* aeronaveAsign) {
    this->aeronaveAsign = aeronaveAsign;
}

void Vuelo::setPuertaAsign(PuertaEmbarque* puertaAsign) {
    this->puertaAsign = puertaAsign;
}

void Vuelo::setSillasDisponibles(int sillasDisponibles) {
    this->sillasDisponibles = sillasDisponibles;
}

void Vuelo::setTripAsignada(vector<Tripulacion*> tripAsignada) {
    this->tripAsignada = tripAsignada;
}

void Vuelo::Embarcar(){
    TorreDeControl::getInstancia().asignarPuerta(this);
}
