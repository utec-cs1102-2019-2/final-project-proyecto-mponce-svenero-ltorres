//
// Created by maxpo on 27/11/2019.
//

#include "Motocicleta.h"

#include <iostream>
#include <ctime>

using namespace std;

Motocicleta::Motocicleta():Vehiculo(){
    srand(time(nullptr));
    ruedas=4;
    peso=Min+(rand()%(Max-Min+1));
    peso=Min+(rand()%(Max-Min+1));
    chasis=Min+(rand()%(Max-Min+1));
    carroceria=Min+(rand()%(Max-Min+1));
    x=0;
    y=0;
    VelMin=0;
    VelMax=800;
    VelActual=VelMin+(rand()%(VelMax-VelMin+1));
}

void Motocicleta::avanzar(){
    cout<<"Bicileta avanzando ";
    cout<<"desde "<<x<<" , "<<y<<endl;
    x=x+VelActual;
    cout<<"Hasta "<<x<<" , "<<y<<endl;
}
void Motocicleta::retroceder(){
    x=x-VelActual;
}
void Motocicleta::mejorar(){
    ruedas=ruedas*efecto;
    chasis=chasis*efecto;
    carroceria=chasis*efecto;
    zapatillas=zapatillas*efecto;
}
