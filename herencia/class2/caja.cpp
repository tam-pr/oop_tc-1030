#include "Caja.h"
#include<iostream>
using namespace std; 

Caja::Caja():Caja(7.0,8.0,9.0){

}

Caja::Caja(double largo, double ancho, double altura):Rectangulo(largo,ancho){
    this->altura = altura; 
}; 

double Caja::perimetro(){
    return (this->altura*8.0)+(this->ancho*2.0)+(this->largo*4.0); 
}

double Caja::area(){
    return 2.0*((this->largo*this->ancho)+(this->largo*this->altura)+(this->ancho*this->altura)); 
}; 

double Caja::volumen(){
    return this->altura*(this->ancho*this->largo); 
}; 

void Caja::imprimir(){
    cout << "Caja con "<<this->largo<<" de largo, "<<this->ancho <<" de ancho y " << this->altura <<"."<<endl; 
}