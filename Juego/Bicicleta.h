//
// Created by maxpo on 27/11/2019.
//

#ifndef JUEGO_BICICLETA_H
#define JUEGO_BICICLETA_H


#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
public:
    Bicicleta();
    void avanzar() override;
    void retroceder() override;
    void mejorar() override;

};


#endif //JUEGO_BICICLETA_H
