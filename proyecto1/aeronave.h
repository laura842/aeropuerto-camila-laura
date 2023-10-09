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
    vector<Vuelo> vuelosAsign;
    public:
    Aeronave();
    Aeronave(string marca,string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign,vector<Vuelo> vuelosAsign);
    void reportarUbicacion(string &mensaje);
    void despegar();
    void aterrizar();
    void recibido(string &mensaje);
    void añadirVuelo();
    // Métodos getters
    string getId() const;
    string getMarca() const;
    string getModelo() const;
    int getCapacidad() const;
    int getVelocidadMax() const;
    string getAutonomia() const;
    int getFechaFab() const;
    string getEstado() const;
    bool getTotalAsign() const;
    vector<Vuelo> getVuelosAsign() const;

    // Métodos setters
    void setId(const string& id);
    void setMarca(const string& marca);
    void setModelo(const string& modelo);
    void setCapacidad(int capacidad);
    void setVelocidadMax(int velocidadMax);
    void setAutonomia(const string& autonomia);
    void setFechaFab(int fechaFab);
    void setEstado(const string& estado);
    void setTotalAsign(bool totalAsign);
};
#endif