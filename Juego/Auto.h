
#ifndef JUEGO_AUTO_H
#define JUEGO_AUTO_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
public:
    Auto();
    void avanzar() override;
    void retroceder() override;
    void mejorar() override;
};


#endif //JUEGO_AUTO_H
