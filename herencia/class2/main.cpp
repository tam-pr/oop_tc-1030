//A0648580 Tam Padilla
//github: tam-pr

#include "Figura.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Caja.h"

#include <iostream>
using namespace std; 

int main(){
    Figura fig1; 

    cout << "El perimetro es: " <<fig1.perimetro() <<endl; 
    cout << "El area es: " << fig1.area() <<endl; 
    cout << "El volumen es: " <<fig1.volumen() <<endl;
    fig1.imprimir(); 
    cout<<endl; 

    Rectangulo rec1(2.0,3.0); 

    cout << "El perimetro es: " <<rec1.perimetro() <<endl; 
    cout << "El area es: " << rec1.area() <<endl; 
    cout << "El volumen es: " <<rec1.volumen() <<endl;
    rec1.imprimir(); 
    cout<<endl; 

    Cuadrado cuad1; 
    cout << "El perimetro es: " <<cuad1.perimetro() <<endl; 
    cout << "El area es: " << cuad1.area() <<endl; 
    cout << "El volumen es: " <<cuad1.volumen() <<endl;
    cuad1.imprimir(); 
    cout<<endl; 


    Caja caja1; 
    cout << "El perimetro es: " <<caja1.perimetro() <<endl; 
    cout << "El area es: " << caja1.area() <<endl; 
    cout << "El volumen es: " <<caja1.volumen() <<endl;
    cuad1.imprimir(); 
    cout<<endl; 

    return 0; 
}; 