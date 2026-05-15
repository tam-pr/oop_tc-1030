//A016405806 Tam Padilla 
//Github: tam-pr 

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

        void sethotelName(){
            cout <<"Enter hotel name: " <<endl;
            cin >> hotelName; 
        }; 

        void settotalRooms(){
            cout <<"Enter total number of rooms: " <<endl;
            cin >> totalRooms; 

        };
    
        void setroomNumbers(){
            for (int i= 100; i <100 +totalRooms; i++){
                roomNumbers.push_back(i); 
            }; 
        }; 

        Hotel(){
            sethotelName();
            totalRooms = 40; 
            setroomNumbers();
        }; 

        void displaySummary(){
            cout << hotelName << " Occupancy: "<< endl;
            for (int i =0; i < reservationSummary.size(); i++){
                cout << reservationSummary[i] <<endl;
            }; 
        };


}; 

class Room: public Hotel {
    
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

        int getroomNumber(){
            if (pointer < roomNumbers.size()){
                roomNumber = roomNumbers[pointer]; 
            }

            else {
                roomNumber = -1; 
            }; 

            return roomNumber; 
        }
        ; 

        void getisAvailable(){
            getroomNumber();
            if (roomNumber != -1){ 
                isAvailable = true; 

                for (int i =0; i < occupiedRooms.size(); i++){
                    if (roomNumber == occupiedRooms[i]){
                        isAvailable = false; 
                        break; 
                    }
                }; 
            
            }
            else {
                isAvailable = false;
        }; 

        };

        string roomStatus(){
    
            getisAvailable();
            string roomState;
            if (roomNumber == -1){
                roomState = "HOTEL AT CAPACITY"; 
            }
            else if (isAvailable == true){
                roomState   = "Available"; 
            }
            else {
                roomState = "Occupied"; 
            }; 
            return roomState; 
        };

        int getnumberAdults(){
            cout <<"Enter number of adults: " <<endl;
            cin >> numberAdults; 
            return numberAdults; 
        };

        int getnumberChildren(){
            cout <<"Enter number of children: " <<endl;
            cin >> numberChildren; 
            return numberChildren; 
        };

        int getstartingTariff(){
            getnumberAdults();
            getnumberChildren();
            int totalTariff = (numberAdults * adultTariff) + (numberChildren * childTariff); 
            return totalTariff; 
        };

        int openVoucher(){
            cout <<"Enter open credit voucher amount: " <<endl;
            cin >> creditVoucher; 
            return creditVoucher;
        }; 

        int checkIn(){
            string roomState =roomStatus();
            cout << "Operation " <<pointer <<endl;
            if (roomState != "Available"){
                cout <<"Cant process another checkin rn, hotels fully booked :(" <<endl;
            }
            else {

                cout <<"Guest name: " <<endl;
                cin >> guestName;
                int totalTariff = getstartingTariff();
                double creditVoucher= openVoucher();

                string reservationMessage = "The room " + to_string(roomNumber) + " is " + roomState + " for the reservation under the guest " 
                + guestName + " at the starting tariff of $" + to_string(totalTariff) + " and has left an open credit voucher of $" + to_string(creditVoucher);
                
                cout << reservationMessage << endl;
                occupiedRooms.push_back(roomNumber);
                reservationSummary.push_back(reservationMessage);
                pointer++;

            

            }
            return roomNumber;
        };

        int setextraCharges(){
            cout <<"Extra charges: " <<endl;
            cin >> extraCharges; 
            return extraCharges; 
        };



        bool checkOut(){
            cout << "Room number for check out: " <<endl;
            cin >> roomNumber;
            int target = roomNumber;
            auto it = find(occupiedRooms.begin(), occupiedRooms.end(), target);

            if (it != occupiedRooms.end()) {
                occupiedRooms.erase(it);
                cout <<"Thanks for staying w us :D. Room " << roomNumber << " is now available for check in!" <<endl;
                return true;
            } 
            
            else {
                cout << "Cant check out of a room that is not occupied :(" <<endl;
                return false;
            }

        }; 



}; 

vector <int> Hotel::roomNumbers;
vector <int> Room::occupiedRooms; 
vector <string> Hotel::reservationSummary;
int Room::pointer = 0;

int main() {
        Hotel hotel1; 

        Room room1;
            room1.checkIn();
        
        hotel1.displaySummary();
        room1.checkOut();
            
    return 0;
    }; 
