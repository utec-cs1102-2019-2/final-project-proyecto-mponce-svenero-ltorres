#include "auto.h"
#include <iostream>
using namespace std;
#include <ctime>
Auto::Auto():Vehiculo(){
    srand(time(nullptr));
    ruedas=4;
    peso=Min+(rand()%(Max-Min+1));
    chasis=Min+(rand()%(Max-Min+1));
    carroceria=Min+(rand()%(Max-Min+1));
    x=0;
    y=0;
    VelMin=0;
    VelMax=700;
    VelActual=VelMin+(rand()%(VelMax-VelMin+1));
}

void Auto::avanzar(){
    cout<<"Bicileta avanzando ";
    cout<<"desde "<<x<<" , "<<y<<endl;
    x=x+VelActual;
    cout<<"Hasta "<<x<<" , "<<y<<endl;
}
void Auto::retroceder(){
    x=x-VelActual;
}
void Auto::mejorar(){
    ruedas=ruedas*efecto;
    chasis=chasis*efecto;
    carroceria=chasis*efecto;
    zapatillas=zapatillas*efecto;
}