#include "vuelo.h"
#include "aeronave.h"
#include "avion.h"
#include "helicoptero.h"
#include "jetPrivado.h"
#include "pasajero.h"
#include "persona.h"
#include "puertaEmbarque.h"
#include "torreDeControl.h"
#include "tripulacion.h"
#include <iostream>
int main(){
    Tripulacion* T1 = new Tripulacion("1111","Mc","c","1/10/2000","F","cra.23","111","aa","Asafata",2,8);
    Helicoptero* h1 = new Helicoptero("qqq","a0",1,2,"e",1222,"serv",false,2,1,"s");
    Helicoptero* h2= new Helicoptero("qqqq","a1",1,2,"e",1222,"serv",false,2,1,"s");
    Avion* A1 = new Avion("qq","aa",4,2,"a",22,"q0",false,1,2,"a");
    Avion* A2 = new Avion("qq","aa",4,2,"a",22,"q0",false,1,2,"a");
    PuertaEmbarque* P1 = new PuertaEmbarque(1,"helados",true);
    PuertaEmbarque* P2 = new PuertaEmbarque(2,"cafe",true);
    Vuelo* V1 = new Vuelo();
    string s1="h1",s2="h2",s3="A1",s4="A2",s5="V1";
    (*h1).setId(s1);
    (*h2).setId(s2);
    (*A1).setId(s3);
    (*A2).setId(s4);
    (*P1).setNumPuerta(1);
    (*P1).setDisponible(true);
    (*P2).setNumPuerta(2);
    (*V1).setId(s5);
    (*V1).setAeronaveAsign(A1);
    TorreDeControl::getInstancia().añadirPuerta(P1);
    TorreDeControl::getInstancia().añadirPuerta(P2);
    TorreDeControl::getInstancia().añadirAeronave(A1);
    TorreDeControl::getInstancia().añadirAeronave(h1);
    TorreDeControl::getInstancia().añadirAeronave(A2);
    TorreDeControl::getInstancia().añadirAeronave(h2);
    (*A1).despegar();
    (*V1).Embarcar();
    cout<<"-------------------"<<endl;
    string Ub="panama";
    (*A1).reportarUbicacion(Ub);
    cout<<"-------------------"<<endl;
    cout<<(*((*V1).getPuertaAsign())).getNumPuerta()<<endl;

    int opcion = 0;

    while (opcion != 7) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Consultar informacion sobre alguna de nuestras aeronaves" << std::endl;
        std::cout << "2. Modificar informacion sobre alguna de nuestras aeronaves" << std::endl;
        std::cout << "3. Registrar un vuelo" << std::endl;
        std::cout << "4. Ver vuelos disponibles (con posibilidad de comprar)" << std::endl;
        std::cout << "5. Ver las puertas de embarque" << std::endl;
        std::cout << "6. Ver el historial de vuelos" << std::endl;
        std::cout << "7. Salir" << std::endl;

        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Selecciono la Opcion 1." << std::endl;
                // Aquí puedes agregar la lógica para la Opción 1
                break;
            case 2:
                std::cout << "Selecciono la Opcion 2." << std::endl;
                // Aquí puedes agregar la lógica para la Opción 2
                break;
            case 3:
                std::cout << "Selecciono la Opcion 3." << std::endl;
                // Aquí puedes agregar la lógica para la Opción 3
                break;
            case 4:
                std::cout << "Selecciono la Opcion 4." << std::endl;
                // Aquí puedes agregar la lógica para la Opción 3
                break;
            case 5:
                std::cout << "Selecciono la Opcion 5." << std::endl;
                // Aquí puedes agregar la lógica para la Opción 3
                break;
            case 6:
                std::cout << "Selecciono la Opcion 6." << std::endl;
                // Aquí puedes agregar la lógica para la Opción 3
                break;
            case 7:
                std::cout << "Saliendo del programa." << std::endl;
                return 0;  // Salir del programa
            default:
                std::cout << "Opcion no valida. Por favor, seleccione una opcion valida." << std::endl;
        }
    }



    return 0;
}
