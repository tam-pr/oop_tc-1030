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
        int getroomNumber(){
            roomNumber = roomNumbers[pointer];
            pointer++;
            cout <<"Room number: " << roomNumber <<endl;
            return roomNumber;

        }; 

        bool getisAvailable(){

            if (occupiedRooms.size() == 0){
                isAvailable = true; 
                //cout <<"Room is available" <<endl;
            }
            else {
                for (int i = 0; i < occupiedRooms.size(); i++){
                    if (roomNumber == occupiedRooms[i]){
                        isAvailable = false; 
                        //cout <<"Room is occupied" <<endl;
                    }

                    else {
                        isAvailable = true; 
                        //cout <<"Room is available" <<endl;
                    }; 

                }; 
            }; 
            occupiedRooms.push_back(roomNumber); 
            return isAvailable;
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
            room1.getroomNumber();
            cout <<room1.getisAvailable() <<endl;
        
        Room room2; 
            room2.getroomNumber();
            cout <<room2.getisAvailable() <<endl;

    return 0;
    }; 
