#ifndef AERONAVE_H
#define AERONAVE_H
#include <iostream>
#include <vector>
#include <string>
#include "vuelo.h"
#include "torreDeControl.h"
using namespace std;
class TorreDeControl;
class Vuelo;
class Aeronave{
    private:
    string id;
    string marca;
    string modelo;
    int capacidad;
    int velocidadMax;
    string autonomia;
    int fechaFab;
    string estado;
    bool totalAsign;
    vector<Vuelo* > vuelosAsign;
    public:
    Aeronave();
    Aeronave(string marca, string id, string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign);
    void reportarUbicacion(string &mensaje);
    void despegar();
    void aterrizar();
    void recibido(string &mensaje);
    void anadirVuelo(Vuelo* V);
    // Métodos getters
    string getId();
    string getMarca();
    string getModelo();
    int getCapacidad();
    int getVelocidadMax() ;
    string getAutonomia() ;
    int getFechaFab() ;
    string getEstado() ;
    bool getTotalAsign() ;
    vector<Vuelo*> getVuelosAsign();

    // Métodos setters
    void setId( string& id);
    void setMarca( string& marca);
    void setModelo(string& modelo);
    void setCapacidad(int capacidad);
    void setVelocidadMax(int velocidadMax);
    void setAutonomia( string& autonomia);
    void setFechaFab(int fechaFab);
    void setEstado(string& estado);
    void setTotalAsign(bool totalAsign);
};
#endif