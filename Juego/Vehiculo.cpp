
#include "Vehiculo.h"
Vehiculo::Vehiculo() {}

Vehiculo::~Vehiculo(){}
void Vehiculo::setnombre(string pNombre) { this->nombre = pNombre; }
string Vehiculo::getnombre() { return nombre; }
Vehiculo::Vehiculo(string pNombre):nombre{pNombre} {
}