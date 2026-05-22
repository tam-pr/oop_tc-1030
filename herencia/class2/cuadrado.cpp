#include "Cuadrado.h"
#include <iostream>
using namespace std; 

Cuadrado::Cuadrado():Cuadrado(7.0){}

Cuadrado::Cuadrado(double lado):Rectangulo(lado,lado){}

void Cuadrado::imprimir(){
    cout << "Cuadrado con lado "<< this->largo <<"."<<endl; 
}
