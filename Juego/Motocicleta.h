
#ifndef JUEGO_MOTOCICLETA_H
#define JUEGO_MOTOCICLETA_H

#include "Vehiculo.h"
class Motocicleta:public Vehiculo {

public:
    Motocicleta();
    void avanzar() override;
    void retroceder() override;
    void mejorar();

};





#endif //JUEGO_MOTOCICLETA_H
