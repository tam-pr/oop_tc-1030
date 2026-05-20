#include "rectangulo.h"
#include <iostream>
using namespace std; 

Rectangulo::Rectangulo():Rectangulo(3.0,4.0){} 

Rectangulo::Rectangulo(double ancho, double largo){
    this->largo = largo; 
    this->ancho = ancho; 
} 

double Rectangulo::perimetro(){
    return 2.0*(this->largo + this->ancho); 
} 
