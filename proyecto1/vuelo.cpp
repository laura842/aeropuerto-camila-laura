#include "vuelo.h"

// Constructor de Vuelo
Vuelo::Vuelo(string id, string fecha, string origen,int sillasDisponibles,vector<Tripulacion> tripAsignada){
    this->id = id;
    this->fecha = fecha;
    this->origen = origen;
   // this->aeronaveAsign = aeronaveAsign;
    this->sillasDisponibles = sillasDisponibles; 
    this->tripAsignada = tripAsignada;
}

// Métodos getters para atributos de Vuelo
string Vuelo::getId() const {
    return id;
}

string Vuelo::getFecha() const {
    return fecha;
}

string Vuelo::getOrigen() const {
    return origen;
}

Aeronave Vuelo::getAeronaveAsign() const {
    return aeronaveAsign;
}

PuertaEmbarque Vuelo::getPuertaAsign() const {
    return puertaAsign;
}

int Vuelo::getSillasDisponibles() const {
    return sillasDisponibles;
}

vector<Tripulacion> Vuelo::getTripAsignada() const {
    return tripAsignada;
}

// Métodos setters para atributos de Vuelo
void Vuelo::setId(const string& id) {
    this->id = id;
}

void Vuelo::setFecha(const string& fecha) {
    this->fecha = fecha;
}

void Vuelo::setOrigen(const string& origen) {
    this->origen = origen;
}

void Vuelo::setAeronaveAsign(const Aeronave& aeronaveAsign) {
    this->aeronaveAsign = aeronaveAsign;
}

void Vuelo::setPuertaAsign(const PuertaEmbarque& puertaAsign) {
    this->puertaAsign = puertaAsign;
}

void Vuelo::setSillasDisponibles(int sillasDisponibles) {
    this->sillasDisponibles = sillasDisponibles;
}

void Vuelo::setTripAsignada(const vector<Tripulacion>& tripAsignada) {
    this->tripAsignada = tripAsignada;
}

void Vuelo::Embarcar(){
    TorreDeControl::getInstancia().asignarPuerta(this);
}
