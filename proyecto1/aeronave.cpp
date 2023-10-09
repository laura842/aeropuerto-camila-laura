#include "aeronave.h"
Aeronave::Aeronave(string marca, string modelo, int capacidad, int velocidadMax, string autonomia, int fechaFab, string estado, bool totalAsign, vector<Vuelo> vuelosAsign) {
    this->marca = marca;
    this->modelo = modelo;
    this->capacidad = capacidad;
    this->velocidadMax = velocidadMax;
    this->autonomia = autonomia;
    this->fechaFab = fechaFab;
    this->estado = estado;
    this->totalAsign = totalAsign;
    this->vuelosAsign = vuelosAsign;
}

// Métodos getters
string Aeronave::getId() const {
    return id;
}

string Aeronave::getMarca() const {
    return marca;
}

string Aeronave::getModelo() const {
    return modelo;
}

int Aeronave::getCapacidad() const {
    return capacidad;
}

int Aeronave::getVelocidadMax() const {
    return velocidadMax;
}

string Aeronave::getAutonomia() const {
    return autonomia;
}

int Aeronave::getFechaFab() const {
    return fechaFab;
}

string Aeronave::getEstado() const {
    return estado;
}

bool Aeronave::getTotalAsign() const {
    return totalAsign;
}

vector<Vuelo> Aeronave::getVuelosAsign() const {
    return vuelosAsign;
}

// Métodos setters
void Aeronave::setId(const string& id) {
    this->id = id;
}

void Aeronave::setMarca(const string& marca) {
    this->marca = marca;
}

void Aeronave::setModelo(const string& modelo) {
    this->modelo = modelo;
}

void Aeronave::setCapacidad(int capacidad) {
    this->capacidad = capacidad;
}

void Aeronave::setVelocidadMax(int velocidadMax) {
    this->velocidadMax = velocidadMax;
}

void Aeronave::setAutonomia(const string& autonomia) {
    this->autonomia = autonomia;
}

void Aeronave::setFechaFab(int fechaFab) {
    this->fechaFab = fechaFab;
}

void Aeronave::setEstado(const string& estado) {
    this->estado = estado;
}

void Aeronave::setTotalAsign(bool totalAsign) {
    this->totalAsign = totalAsign;
}

void Aeronave::despegar(){
    TorreDeControl::getInstancia().aeronaveDespega(this);
}

void Aeronave::recibido(string &mensaje){
    cout<<"La aeronave"<<id<<"ha recibido el siguiente mensaje:"<<mensaje<<endl;
}

void Aeronave::aterrizar(){
    TorreDeControl::getInstancia().aeronaveAterriza(this);
}

void Aeronave::reportarUbicacion(string &mensaje){
    TorreDeControl::getInstancia().aeronaveComparte(this,mensaje);
}