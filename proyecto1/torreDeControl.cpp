#include "torreDeControl.h"
#include "vuelo.h"
#include "aeronave.h"

// Método para notificar aeronave (enviar mensaje a todas las aeronaves excepto la que genera el mensaje)
void TorreDeControl::notificar(Aeronave* A, string mensaje){
    for (int i = 0; i < notificacion.size(); i++) {
        if (notificacion[i]->getId() != A->getId()) {
            notificacion[i]->recibido(mensaje);
        }
    }
}

// Método para notificar que una aeronave ha despegado
void TorreDeControl::aeronaveDespega(Aeronave* A){
    string mensaje = "La aeronave " + A->getId() + " ha despegado";
    notificar(A, mensaje);
}

// Método para notificar que una aeronave ha aterrizado
void TorreDeControl::aeronaveAterriza(Aeronave* A){
    string mensaje = "La aeronave " + A->getId() + " ha aterrizado";
    notificar(A, mensaje);
}

// Método para notificar la ubicación de una aeronave
void TorreDeControl::aeronaveComparte(Aeronave* A, string &mensaje){
    string mensaje1 = "La aeronave " + A->getId() + " se encuentra en " + mensaje;
    notificar(A, mensaje1);
}

// Método para asignar una puerta de embarque a un vuelo
void TorreDeControl::asignarPuerta(Vuelo* V){
    bool flag = true;
    for (int i = 0; i < puertas.size() && flag; i++) {
        if (puertas[i]->getDisponible()) {
            puertas[i]->setDisponible(false);
            puertas[i]->setVueloActual(V);
            puertas[i]->añadirHistorial(V);
            flag = false;
            V->setPuertaAsign(puertas[i]);
        }
    }
    if (flag)
        cout << "Por el momento no hay puertas disponibles" << endl;
}

// Método para agregar una aeronave a la lista de notificaciones
void TorreDeControl::añadirAeronave(Aeronave* A){
    notificacion.push_back(A);
}

// Método para agregar una puerta de embarque a la lista de puertas
void TorreDeControl::añadirPuerta(PuertaEmbarque* P){
    puertas.push_back(P);
}
