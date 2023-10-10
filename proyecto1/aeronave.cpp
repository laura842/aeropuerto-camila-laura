#include "aeronave.h"
#include "torreDeControl.h"
Aeronave::Aeronave(string marca, string id, string modelo, int capacidad, int velocidadMax, string autonomia, int fechaFab, string estado, bool totalAsign) {
    this->marca = marca;
    this->id=id;
    this->modelo = modelo;
    this->capacidad = capacidad;
    this->velocidadMax = velocidadMax;
    this->autonomia = autonomia;
    this->fechaFab = fechaFab;
    this->estado = estado;
    this->totalAsign = totalAsign;
}

// Métodos getters
string Aeronave::getId()  {
    return id;
}

string Aeronave::getMarca()  {
    return marca;
}

string Aeronave::getModelo()  {
    return modelo;
}

int Aeronave::getCapacidad()  {
    return capacidad;
}

int Aeronave::getVelocidadMax()  {
    return velocidadMax;
}

string Aeronave::getAutonomia()  {
    return autonomia;
}

int Aeronave::getFechaFab()  {
    return fechaFab;
}

string Aeronave::getEstado()  {
    return estado;
}

bool Aeronave::getTotalAsign()  {
    return totalAsign;
}

vector<Vuelo*> Aeronave::getVuelosAsign()  {
    return vuelosAsign;
}

// Métodos setters
void Aeronave::setId( string& id) {
    this->id = id;
}

void Aeronave::setMarca( string& marca) {
    this->marca = marca;
}

void Aeronave::setModelo( string& modelo) {
    this->modelo = modelo;
}

void Aeronave::setCapacidad(int capacidad) {
    this->capacidad = capacidad;
}

void Aeronave::setVelocidadMax(int velocidadMax) {
    this->velocidadMax = velocidadMax;
}

void Aeronave::setAutonomia( string& autonomia) {
    this->autonomia = autonomia;
}

void Aeronave::setFechaFab(int fechaFab) {
    this->fechaFab = fechaFab;
}

void Aeronave::setEstado( string& estado) {
    this->estado = estado;
}

void Aeronave::setTotalAsign(bool totalAsign) {
    this->totalAsign = totalAsign;
}

void Aeronave::despegar(){
    TorreDeControl::getInstancia().aeronaveDespega(this);
}

void Aeronave::recibido(string &mensaje){
    cout<<"La aeronave "<<id<<" ha recibido el siguiente mensaje: "<<mensaje<<endl;
}

void Aeronave::aterrizar(){
    TorreDeControl::getInstancia().aeronaveAterriza(this);
}

void Aeronave::reportarUbicacion(string &mensaje){
    TorreDeControl::getInstancia().aeronaveComparte(this,mensaje);
}

void Aeronave::anadirVuelo(Vuelo* V){
    if (totalAsign==false){
        vuelosAsign.push_back(V);
        if (vuelosAsign.size()==3){
            totalAsign=true;
        }
        cout<<"Vuelo asignado correctamente"<<endl;
    }
    else{
        cout<<"No es posible asignar mas vuelos a esta aeronave"<<endl;
    }
}