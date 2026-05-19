#include "figura.h"
#include "rectangulo.h"
#include <iostream>
using namespace std; 

int main(){
    Figura fig1; 

    cout << "El perimetro es: " <<fig1.perimetro() <<endl; 
    cout << "El area es: " << fig1.area() <<endl; 
    cout << "El volumen es: " <<fig1.volumen() <<endl; 
    
    return 0; 
}; 