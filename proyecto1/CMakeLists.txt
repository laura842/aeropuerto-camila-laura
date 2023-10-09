cmake_minimum_required(VERSION 3.26)
project(proyecto1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(proyecto1
        aeronave.cpp
        aeronave.h
        aeropuerto.cpp
        aeropuerto.h
        avion.cpp
        avion.h
        helicoptero.cpp
        helicoptero.h
        jetPrivado.cpp
        jetPrivado.h
        main.cpp
        pasajero.cpp
        pasajero.h
        persona.cpp
        persona.h
        puertaEmbarque.cpp
        puertaEmbarque.h
        torreDeControl.cpp
        torreDeControl.h
        tripulacion.cpp
        tripulacion.h
        vuelo.cpp
        vuelo.h)
