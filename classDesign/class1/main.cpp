#include "clock.h"
#include <iostream>

using namespace std; 

int main (){
    Clock reloj1; 
    Clock reloj2(10,03,00); 

    reloj1.printTime();
    cout << endl; 

    reloj2.printTime(); 
    cout << endl;

    cout << "Reloj 2 horas: " << reloj2.getHours() << ", minutos: " << reloj2.getMinutes() << " y segundos: " << reloj2.getSeconds() <<endl; 

    reloj1.setTime(23,59,59); 
    reloj1.incrementSeconds(); 
    reloj1.printTime();

    Clock reloj3; 
    reloj3.printTime(); 
    reloj3.makeCopy(reloj2); 
    reloj3.printTime(); 

    Clock reloj4; 
    reloj4 = reloj3.getCopy(); 

    reloj4.printTime();
    return 0; 
}