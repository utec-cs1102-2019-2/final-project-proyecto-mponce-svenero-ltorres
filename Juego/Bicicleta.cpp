

#include <iostream>
#include "Bicicleta.h"
#include <ctime>

using namespace std;

Bicicleta::Bicicleta():Vehiculo(){
    srand(time(nullptr));
    ruedas=2;
    peso=Min+(rand()%(Max-Min+1));
    efecto=Min+(rand()%(Max-Min+1));
    chasis=Min+(rand()%(Max-Min+1));
    carroceria=Min+(rand()%(Max-Min+1));
    x=0;
    y=0;
    VelMin=0;
    VelMax=137;
    VelActual=VelMin+(rand()%(VelMax-VelMin+1));
}

void Bicicleta::avanzar(){
    cout<<"Bicileta avanzando ";
    cout<<"desde "<<x<<" , "<<y<<endl;
    x=x+VelActual;
    cout<<"Hasta "<<x<<" , "<<y<<endl;
}
void Bicicleta::retroceder(){
    x=x-VelActual;
}
void Bicicleta::mejorar(){
    ruedas=ruedas*efecto;
    chasis=chasis*efecto;
    carroceria=chasis*efecto;
    zapatillas=zapatillas*efecto;
}