
#ifndef JUEGO_VEHICULO_H
#define JUEGO_VEHICULO_H


#include <iostream>
using namespace std;

typedef int E;
typedef float D;
typedef char C;
typedef  string S;

class Vehiculo {
private:
    S nombre;
public:
    E efecto;
    E peso;
    E chasis;
    E carroceria;
    E ruedas;
    E zapatillas;
    E Min=2;
    E Max=10;
    E VelMax;
    E VelMin;
    E VelActual;
    E x;
    E y;
    Vehiculo();
    ~Vehiculo();
    Vehiculo(string pnombre);
    virtual void avanzar()=0;
    virtual void retroceder()=0;
    void setnombre(string nombre);
    string getnombre();
    virtual void mejorar()=0;

};



#endif //JUEGO_VEHICULO_H
