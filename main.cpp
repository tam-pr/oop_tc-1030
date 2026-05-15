#include "adminHotel.h"

int main(){

    Hotel hotel1; 
    
    Room room1; 
        room1.checkIn();
    
    hotel1.displaySummary(); 

    room1.checkOut(); 

    return 0; 
}; 