#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "figura.h"

class Rectangulo:public Figura{
    private: 
        double largo, 
               ancho; 
    
    public: 
        Rectangulo(); 
        Rectangulo(double largo, double ancho); 
        double perimetro(); 
}; 

#endif