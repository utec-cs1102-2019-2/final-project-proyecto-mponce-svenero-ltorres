#include "Troncomovil.h"

#include <iostream>
#include <ctime>

using namespace std;

Troncomovil::Troncomovil():Vehiculo(){
    srand(time(NULL));
    peso=Min+(rand()%(Max-Min+1));
    zapatillas=Min+(rand()%(Max-Min+1));
    chasis=Min+(rand()%(Max-Min+1));;
    carroceria=Min+(rand()%(Max-Min+1));;
    x=0;
    y=0;
    VelMin=0;
    VelMax=500;
    VelActual=VelMin+(rand()%(VelMax-VelMin+1));
}

void Troncomovil::avanzar(){
    cout<<"Bicileta avanzando ";
    cout<<"desde "<<x<<" , "<<y<<endl;
    x=x+VelActual;
    cout<<"Hasta "<<x<<" , "<<y<<endl;
}
void Troncomovil::retroceder(){

    x=x-VelActual;

}
void Troncomovil::mejorar(){
    ruedas=ruedas*efecto;
    chasis=chasis*efecto;
    carroceria=chasis*efecto;
    zapatillas=zapatillas*efecto;
}