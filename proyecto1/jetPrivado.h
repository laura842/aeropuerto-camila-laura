#ifndef JET_H
#define JET_H
#include <iostream>
#include <vector>
#include <string>
#include "aeronave.h"
using namespace std;

class JetPrivado : public Aeronave{
    private:
    string propietario;
    vector<string> serviciosABordo;
    vector<string> destinosFrecuentes;
    public:
    JetPrivado(string marca,string modelo,int capacidad,int velocidadMax,string autonomia,int fechaFab,string estado,bool totalAsign,vector<Vuelo> vuelosAsign,string propietario,vector<string> serviciosABordo, vector<string> destinosFrecuentes);
    // Métodos getters para atributos de JetPrivado
    string getPropietario() const;
    vector<string> getServiciosABordo() const;
    vector<string> getDestinosFrecuentes() const;

    // Métodos setters para atributos de JetPrivado
    void setPropietario(const string& propietario);
    void setServiciosABordo(const vector<string>& serviciosABordo);
    void setDestinosFrecuentes(const vector<string>& destinosFrecuentes);
};
#endif