#include "Caja.h"

Caja::Caja(){

}

Caja::Caja(double largo, double ancho, double altura):Rectangulo(largo,ancho){
    this->altura = altura; 
}; 
