#ifndef CAJA_H
#define CAJA_H 
#include "Rectangulo.h"

class Caja:public Rectangulo{
    private: 
        double altura; 

    public: 
        Caja();
        Caja(double largo, double ancho, double altura); 
};

#endif 