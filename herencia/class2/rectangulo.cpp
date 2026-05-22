//A0648580 Tam Padilla
//github: tam-pr

#include "Rectangulo.h"
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

double Rectangulo::area(){
    return this->largo*this->ancho; 
}

void Rectangulo::imprimir(){
    cout << "Soy un rectangulo de ancho "<<this->ancho<< " y de largo "<<this->largo <<"."<<endl;
}
