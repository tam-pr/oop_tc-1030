//A0648580 Tam Padilla
//github: tam-pr

#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figura.h"

class Rectangulo:public Figura{
    protected: 
        double largo, 
               ancho; 
    
    public: 
        Rectangulo(); 
        Rectangulo(double largo, double ancho); 
        double perimetro(); 
        double area(); 
        void imprimir(); 
}; 

#endif