#include "vuelo.h"
#include "aeronave.h"
#include "aeropuerto.h"
#include "avion.h"
#include "helicoptero.h"
#include "jetPrivado.h"
#include "pasajero.h"
#include "persona.h"
#include "puertaEmbarque.h"
#include "torreDeControl.h"
#include "tripulacion.h"
#include <iostream>
using namespace std;
int main(){
    Pasajero* Pa1 = new Pasajero("66724670","Judith","Zapata","1/10/1990","F","cr. 90 #10-22","3113312255","j.f@gmail.com","Colombiana",3,"o+, alergias: no");
    Pasajero* Pa2 = new Pasajero("66724670","Sofia","Zapata","1/10/2007","F","cr. 90 #10-22","3113312255","j.f@gmail.com","Colombiana",3,"o+, alergias: no");
    Tripulacion* T1 = new Tripulacion("11078411","Jaime","Nunez","1/12/1980","M","cr.23 #10-50","3122167788","j.c@gmail.com","comandante",10,8);
    Tripulacion* T2 = new Tripulacion("11034561","Juan","Munoz","9/03/1990","M","cr.45 #30-50","3120316788","j.m@gmail.com","copiloto",6,7);
    Tripulacion* T3 = new Tripulacion("11030901","Sara","Izquierdo","12/05/1994","F","cr.95 #31-20","3114056677","s.i@gmail.com","azafata",2,10);
    vector<Tripulacion*> trip1;
    trip1.push_back(T1);
    trip1.push_back(T2);
    trip1.push_back(T3);
    Helicoptero* h1 = new Helicoptero("Boeing","h1","1234",4,300,"600km",2020,"servicio",false,2,100,"rescate");
    Helicoptero* h2= new Helicoptero("Boeing","h2","111",7,400,"500km",2018,"mantenimiento",false,5,100,"turismo");
    Avion* A1 = new Avion("Boeing","A1","2031",5,200,"500km",2011,"servicio",false,500,20,"turismo");
    Avion* A2 = new Avion("Boeing","A2","203",4,500,"700km",2021,"servicio",false,500,10,"turismo");
    PuertaEmbarque* P1 = new PuertaEmbarque(1,"este",true);
    PuertaEmbarque* P2 = new PuertaEmbarque(2,"norte",true);
    Vuelo* V1 = new Vuelo("AV01","10/10/23","Cali","Bog",40,trip1);
    Vuelo* V2 = new Vuelo("AV02","11/10/23","Cali","Med",50,trip1);
    A1->anadirVuelo(V1);
    A2->anadirVuelo(V2);
    cout<<endl;
    V1->setAeronaveAsign(A1);
    V1->setAeronaveAsign(A2);
    Aeropuerto::getInstancia().anadirAeronave(A1);
    Aeropuerto::getInstancia().anadirAeronave(A2);
    Aeropuerto::getInstancia().anadirAeronave(h1);
    Aeropuerto::getInstancia().anadirAeronave(h2);
    Aeropuerto::getInstancia().anadirVuelo(V1);
    Aeropuerto::getInstancia().anadirVuelo(V2);
    Aeropuerto::getInstancia().anadirPuerta(P1);
    Aeropuerto::getInstancia().anadirPuerta(P2);
    Pa1->verVuelos("10/10/23","Cali","Bog");
    Aeropuerto::getInstancia().reservarVuelo("1",Pa1);
    Pa2->verVuelos("11/10/23","Cali","Bog");
    Pa2->verVuelos("11/10/23","Cali","Med");
    Aeropuerto::getInstancia().reservarVuelo("2",Pa2);
    string s1="h1",s2="h2",s3="A1",s4="A2",s5="V1";
    /*(*h1).setId(s1);
    (*h2).setId(s2);
    (*A1).setId(s3);
    (*A2).setId(s4);
    (*P1).setNumPuerta(1);
    (*P1).setDisponible(true);
    (*P2).setNumPuerta(2);
    (*V1).setId(s5);
    (*V1).setAeronaveAsign(A1);*/
    TorreDeControl::getInstancia().añadirPuerta(P1);
    TorreDeControl::getInstancia().añadirPuerta(P2);
    TorreDeControl::getInstancia().añadirAeronave(A1);
    TorreDeControl::getInstancia().añadirAeronave(h1);
    TorreDeControl::getInstancia().añadirAeronave(A2);
    TorreDeControl::getInstancia().añadirAeronave(h2);
    (*V1).Embarcar();
    (*A1).despegar();
    cout<<"-------------------"<<endl;
    string Ub="panama";
    (*A1).reportarUbicacion(Ub);
    cout<<"-------------------"<<endl;
    cout<<(*((*V1).getPuertaAsign())).getNumPuerta()<<endl;

    int contrasena = 1234;
    int opcion = 0;

    while (opcion != 6) {
        cout << "Bienvenido/a al aeropuerto internacional Alfonso Bonilla Aragon" << endl;
        cout << "Menu:" << endl;
        cout << "1. Consultar informacion sobre nuestras aeronaves" << endl;
        cout << "2. Ver las puertas de embarque" << endl;
        cout << "3. Ver vuelos disponibles (con posibilidad de comprar)" << endl;
        cout << "4. Ver el historial de vuelos" << endl;
        cout << "5. Entrar como administrador" << endl; //modificar informacion y añadir cosas, registrar un vuelo
        cout << "6. Salir" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "A continuacion se muestra la lista de nuestras aeronaves:" << endl;
                vector<Aeronave *> aeronavesd = Aeropuerto::getInstancia().getAeronavesdisp();
                for(int i = 0; i < aeronavesd.size(); i++){
                    cout << i + 1 << "."<< endl;
                    cout << "ID: " << aeronavesd[i]->getId() << endl;
                    cout << "Marca: " << aeronavesd[i]->getMarca() << endl;
                    cout << "Autonomia: " << aeronavesd[i]->getAutonomia() << endl;
                    cout << "Capacidad: " << aeronavesd[i]->getCapacidad() << endl;
                    cout << "Estado: " << aeronavesd[i]->getEstado() << endl;
                    cout << "Fecha de fabricacion: " << aeronavesd[i]->getFechaFab() << endl;
                    cout << "Modelo: " << aeronavesd[i]->getModelo() << endl;
                    cout << "Velocidad maxima: " << aeronavesd[i]->getVelocidadMax() << endl;
                    cout << "Esta totalmente asignada?: ";
                    if(aeronavesd[i]->getTotalAsign()){
                        cout << "Si." << endl;
                    }
                    else{
                        cout << "No." << endl;
                    }
                }
                break;
            }

            case 2: {
                cout << "A continuacion se muestra la lista de nuestras puertas de embarque:" << endl;
                vector<PuertaEmbarque *> puertasd = Aeropuerto::getInstancia().getPuertasDisponibles();
                for (int i = 0; i < puertasd.size(); i++) {
                    cout << i + 1 << "." << endl;
                    cout << "Numero: " << puertasd[i]->getNumPuerta() << endl;
                    cout << "Ubicacion: " << puertasd[i]->getUbicacion() << endl;
                    cout << "Vuelo actual: " << puertasd[i]->getVueloActual() << endl;
                    cout << "Esta totalmente asignada?: ";
                    if (puertasd[i]->getDisponible()) {
                        cout << "Si." << endl;
                    } else {
                        cout << "No." << endl;
                    }
                }
                break;
            }

            case 3:{
                string fechaB;
                string origenB;
                string destinoB;
                cout << "Ingrese los datos solicitados para su busqueda:" << endl;
                cout << "Fecha (formato dd/mm/aaaa):" << endl;
                cin >> fechaB;
                cout << "Ciudad de origen:" << endl;
                cin >> origenB;
                cout << "Ciudad de destino:" << endl;
                cin >> destinoB;

                Aeropuerto::getInstancia().verVuelos(fechaB, origenB, destinoB);

                int continuar = 0;
                cout << "Presione 0 (cero) si desea cancelar el proceso o si su busqueda no arrojo resultados" << endl;
                cout << "Presione 1 si desea continuar con la reserva" << endl;
                cin >> continuar;

                if(continuar == 1){

                    //Pasajero();
                    //Aeropuerto::getInstancia().reservarVuelo()
                }

                break;
            }

            case 4:
                cout << "Selecciono la Opcion 4." << endl;
                // Aquí puedes agregar la lógica para la Opción 3
                break;

            case 5: {
                int contra;
                cout << "Ingrese la contrasena de administrador: " << endl;
                cin >> contra;
                if(contra == contrasena){
                    int opcAdmin = 0;
                    while (opcAdmin != 5){
                        cout << "Acciones:" << endl;
                        cout << "1. Cambiar informacion sobre alguna aeronave" << endl;
                        cout << "2. Registrar una aeronave" << endl;
                        cout << "3. Registrar un vuelo" << endl;
                        cout << "4. Registrar una puerta de embarque" << endl;
                        cout << "5. Volver al menu principal" << endl;
                        cout << "Seleccione la accion que desea realizar: " << endl;
                        cin >> opcAdmin;

                        switch (opcAdmin) {
                            case 1:{
                                bool flag = false;
                                string idBusq;
                                cout << "Ingrese el ID de la aeronave que desea modificar:" << std::endl;
                                cin >> idBusq;
                                Aeronave* aeronaveBusq;
                                vector<Aeronave *> aeronavesd = Aeropuerto::getInstancia().getAeronavesdisp();
                                for(int i = 0; i <aeronavesd.size(); i++ and !flag){
                                    if(idBusq == aeronavesd[i]->getId()){
                                        flag = true;
                                        aeronaveBusq = aeronavesd[i];
                                    }
                                }
                                if(flag){
                                    int mod = 0;
                                    while(mod != 9){
                                        cout << "Seleccione la opcion que desea modificar para la aeronave con ID " << aeronaveBusq->getId() << endl;
                                        cout << "1. ID" << endl;
                                        cout << "2. Marca" << endl;
                                        cout << "3. Autonomia" << endl;
                                        cout << "4. Capacidad" << endl;
                                        cout << "5. Estado" << endl;
                                        cout << "6. Fecha de fabricacion" << endl;
                                        cout << "7. Modelo" << endl;
                                        cout << "8. Velocidad maxima" << endl;
                                        cout << "9. Volver a las opciones de administrador" << endl;
                                        cout << "Digite el numero de la opcion: " << endl;
                                        cin >> mod;
                                        switch (mod) {
                                            case 1:{
                                                string nID;
                                                cout << "Ingrese el nuevo ID: " << endl;
                                                cin >> nID;
                                                aeronaveBusq -> setId(nID);
                                                cout << "El nuevo ID de la aeronave es " << aeronaveBusq->getId() << endl;
                                                break;
                                            }

                                            case 2:{
                                                string nMarca;
                                                cout << "Ingrese la nueva marca: " << endl;
                                                cin >> nMarca;
                                                aeronaveBusq -> setMarca(nMarca);
                                                cout << "La nueva marca de la aeronave es " << aeronaveBusq->getMarca() << endl;
                                                break;
                                            }

                                            case 3:{
                                                string nAuto;
                                                cout << "Ingrese el nuevo valor para autonomia: " << endl;
                                                cin >> nAuto;
                                                aeronaveBusq -> setAutonomia(nAuto);
                                                cout << "La nueva marca de la aeronave es " << aeronaveBusq -> getAutonomia() << endl;
                                                break;
                                            }

                                            case 4:{
                                                string nCap;
                                                cout << "Ingrese el nuevo valor para capacidad: " << endl;
                                                cin >> nCap;
                                                aeronaveBusq -> setAutonomia(nCap);
                                                cout << "La nueva capacidad de la aeronave es " << aeronaveBusq -> getAutonomia() << endl;
                                                break;
                                            }

                                            case 5:{
                                                string nEst;
                                                cout << "Ingrese el nuevo valor para el estado: " << endl;
                                                cin >> nEst;
                                                aeronaveBusq -> setEstado(nEst);
                                                cout << "El nuevo estado de la aeronave es " << aeronaveBusq -> getEstado() << endl;
                                                break;
                                            }

                                            case 6:{
                                                int nFec;
                                                cout << "Ingrese el nuevo valor para la fecha de fabricacion: " << endl;
                                                cin >> nFec;
                                                aeronaveBusq -> setFechaFab(nFec);
                                                cout << "La nueva fecha de fabricacion de la aeronave es " << aeronaveBusq -> getFechaFab() << endl;
                                                break;
                                            }

                                            case 7:{
                                                string nMod;
                                                cout << "Ingrese el nuevo valor para el modelo: " << endl;
                                                cin >> nMod;
                                                aeronaveBusq -> setModelo(nMod);
                                                cout << "El nuevo modelo de la aeronave es " << aeronaveBusq -> getModelo() << endl;
                                                break;
                                            }

                                            case 8:{
                                                int nVel;
                                                cout << "Ingrese el nuevo valor para la velocidad maxima: " << endl;
                                                cin >> nVel;
                                                aeronaveBusq -> setVelocidadMax(nVel);
                                                cout << "La nueva velocidad maxima de la aeronave es " << aeronaveBusq -> getVelocidadMax() << endl;
                                                break;
                                            }

                                            case 9:{
                                                cout << "Volviendo a las opciones de administrador" << endl;
                                                break;
                                            }

                                            default:
                                                cout << "Opcion no valida, intente de nuevo" << endl;
                                        }
                                    }

                                }
                                else{
                                    cout << "No se pudo encontrar una aeronave con ese ID";
                                }
                                break;
                            }

                            case 2:{
                                string idR;
                                string marcaR;
                                string modeloR;
                                int capacidadR = 0;
                                int velocidadMaxR = 0;
                                string autonomiaR;
                                int fechaFabR = 0;
                                string estadoR;
                                bool totalAsignR = false;

                                cout << "Ingrese el ID: " << endl;
                                cin >> idR;
                                cout << "Ingrese la marca: " << endl;
                                cin >> marcaR;
                                cout << "Ingrese el modelo: " << endl;
                                cin >> modeloR;
                                cout << "Ingrese la capacidad: " << endl;
                                cin >> capacidadR;
                                cout << "Ingrese la velocidad maxima: " << endl;
                                cin >> velocidadMaxR;
                                cout << "Ingrese la autonomia: " << endl;
                                cin >> autonomiaR;
                                cout << "Ingrese la fecha de fabricacion: " << endl;
                                cin >> fechaFabR;
                                cout << "Ingrese el estado: " << endl;
                                cin >> estadoR;
                                cout << " " << endl;

                                int tipoAero = 0;
                                cout << "Tipos de aeronave:" << endl;
                                cout << "1. Avion" << endl;
                                cout << "2. Helicoptero" << endl;
                                cout << "3. Jet privado" << endl;
                                cout << "Seleccione el tipo de aeronave: " << endl;
                                cin >> tipoAero;

                                if(tipoAero == 1){
                                    int altitudMaxR = 0;
                                    int motoresR = 0;
                                    string categoriaR;

                                    cout << "Ingrese la altitud maxima: " << endl;
                                    cin >> altitudMaxR;
                                    cout << "Ingrese la cantidad de motores: " << endl;
                                    cin >> motoresR;
                                    cout << "Ingrese la categoria: " << endl;
                                    cin >> categoriaR;

                                    Avion* nuevoAvion = new Avion(marcaR, idR, modeloR, capacidadR, velocidadMaxR, autonomiaR, fechaFabR, estadoR, totalAsignR, altitudMaxR, motoresR, categoriaR);
                                }
                                else if(tipoAero == 2){
                                    int rotoresR = 0;
                                    int capElevR = 0;
                                    string usoEspR;

                                    cout << "Ingrese la cantidad de rotores: " << endl;
                                    cin >> rotoresR;
                                    cout << "Ingrese la capacidad de elevacion: " << endl;
                                    cin >> capElevR;
                                    cout << "Ingrese el uso especifico: " << endl;
                                    cin >> usoEspR;

                                    Helicoptero* nuevoHelicoptero = new Helicoptero (marcaR, idR, modeloR, capacidadR, velocidadMaxR, autonomiaR, fechaFabR, estadoR, totalAsignR, rotoresR, capElevR, usoEspR);

                                }
                                else if(tipoAero == 3){

                                }
                                else{
                                    cout << "No valido, intente de nuevo" << endl;
                                }

                                break;
                            }

                            case 3:{
                                cout << "Ingrese los datos del vuelo que va a registrar" << endl;
                                break;
                            }

                            case 4:{
                                cout << "Ingrese los datos de la puerta de embarque que va a registrar" << endl;
                                break;
                            }

                            case 5:{
                                cout << "Volviendo al menu principal" << endl;
                                break;
                            }

                            default:
                                cout << "No valido" << endl;
                                break;

                        }
                    }
                }
            }

            case 6:
                cout << "Gracias por usar nuestros servicios, hasta pronto y buen viaje." << endl;
                return 0;  // Salir del programa
            default:
                cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
        }
    }


    return 0;
}
