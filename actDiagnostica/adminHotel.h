//A01648580 Tam Padilla
//Github: tam-pr

#ifndef ADMINHOTEL_H
#define ADMINHOTEL_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Hotel{
    private: 
        int totalRooms;
    
    protected: 
        string hotelName;
        static vector <int> roomNumbers;
        int childTariff = 250;
        int adultTariff = 650;
        static vector <string> reservationSummary;
    
    public:
        void sethotelName();
        void settotalRooms();
        void setroomNumbers();
        Hotel();
        void displaySummary();

};

class Room : public Hotel{

    private: 
        int roomNumber; 
        bool isAvailable;

        static vector <int> occupiedRooms;

        static int pointer;

    public:
        string guestName;
        int numberAdults;
        int numberChildren;
        double creditVoucher;
        double extraCharges;
    
        int getroomNumber(); 
        void getisAvailable();
        string roomStatus();
        int getnumberAdults();
        int getnumberChildren();
        int getstartingTariff();
        int openVoucher();
        int checkIn();
        int setextraCharges();
        bool checkOut();

}; 

#endif
