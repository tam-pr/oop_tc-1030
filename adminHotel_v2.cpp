//A016405806 Tam Padilla 
//Github: tam-pr 

#include <iostream>
#include <vector>
using namespace std;


class Hotel{
    private: 
        string hotelName; 
        int totalRooms;


    protected: 
        static vector <int> roomNumbers; 
        int childTariff = 250; 
        int adultTariff = 650; 
    
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

}; 
class Room: public Hotel {
    
    private: 
        int roomNumber; 
        bool isAvailable; 

        static vector <int> occupiedRooms;  

        static int pointer; 
        static vector <string> reservationSummary; 

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

        void checkIn(){
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
        };

        void checkOut(){
            
        }; 




}; 

vector <int> Hotel::roomNumbers;
vector <int> Room::occupiedRooms; 
vector <string> Room::reservationSummary;
int Room::pointer = 0;

int main() {
        Hotel hotel1;
            hotel1.sethotelName();
            hotel1.settotalRooms();
            hotel1.setroomNumbers();

        Room room1;
            room1.checkIn();
            
    return 0;
    }; 
