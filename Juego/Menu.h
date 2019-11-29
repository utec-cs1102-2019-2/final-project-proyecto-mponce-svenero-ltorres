//
// Created by maxpo on 27/11/2019.
//

#ifndef JUEGO_MENU_H
#define JUEGO_MENU_H

#include <iostream>
#include "Vehiculo.h"
#include <vector>
using namespace std;

typedef int E;
typedef float D;
typedef char C;
typedef  string S;
typedef  bool L;

class Menu {
private:
    vector<string> coches;
    D Dinero;
    D Exp;
    void MisVehiculos();

public:
    Menu(vector<S>coches, D &Dinero, D Exp){
        this -> Dinero = Dinero;
        this -> coches = coches;
        this -> Exp = Exp;
        Dinero = 200;
        coches.push_back("Bicicleta Vieja");
        Exp = 0;
    }
    Menu();

    void MenuPricipal();
    void CargarPartida();
    void GuardarPartida();
    void ComprarVehiculo();
    void PreCarrera();
    void SeleccionarVehiculo();
    void Carrera();
    void Pits();
    void MenuPits();
    void MostrarDatos();
    void Estado();
    void Participantes();
    void Competidores();

    ~Menu(){};

};


#endif //JUEGO_MENU_H
