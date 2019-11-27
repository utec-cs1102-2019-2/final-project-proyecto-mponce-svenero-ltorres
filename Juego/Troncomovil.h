
#ifndef JUEGO_TRONCOMOVIL_H
#define JUEGO_TRONCOMOVIL_H


#include "Vehiculo.h"
class Troncomovil:public Vehiculo {
public:
    Troncomovil();
    void avanzar() override;
    void retroceder() override;
    void mejorar() override;
};




#endif //JUEGO_TRONCOMOVIL_H
