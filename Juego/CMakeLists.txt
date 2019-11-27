cmake_minimum_required(VERSION 3.14)
project(Juego)

set(CMAKE_CXX_STANDARD 14)

add_executable(Juego main.cpp Bicicleta.h Bicicleta.cpp Auto.cpp Auto.h Menu.cpp Menu.h Motocicleta.h Motocicleta.cpp Troncomovil.cpp Troncomovil.h Vehiculo.h Vehiculo.cpp)