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

    public: 
        string guestName; 
        int numberAdults;
        int numberChildren;

        int getroomNumber(){
            if (pointer < roomNumbers.size()
            ){
                roomNumber = roomNumbers[pointer]; 
                pointer++; 
                return roomNumber; 
            }
            else {
                return -1; 
            }; 
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
            if (roomNumber ==0){
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

        void checkIn(){
            string roomState =roomStatus();
            if (roomState != "Available"){
                cout <<"Cant process another checkin rn, hotels fully booked :(" <<endl;
            }
            else {
                cout <<"Guest name: " <<endl;
                cin >> guestName;
                cout << "The room " << roomNumber << " is " << roomState << " for the reservation under the guest " << guestName << endl;
            }
        };


}; 

vector <int> Hotel::roomNumbers;
vector <int> Room::occupiedRooms; 
int Room::pointer = 0;

int main() {
        Hotel hotel1;
            hotel1.sethotelName();
            hotel1.settotalRooms();
            hotel1.setroomNumbers();

        Room room1;
            room1.checkIn();
        Room room2;
            room2.checkIn();

    return 0;
    }; 
