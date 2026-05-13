//A016405806 Tam Padilla 
//Github: tam-pr 

#include <iostream>
#include <vector>
using namespace std;

class Room{ 
    private: 
        int roomNumber; 
        bool isAvailable; 
        vector <int> occupiedRooms = {}; 

    public:
        int setroomNumber(){
            cout <<"Enter room number: " <<endl;
            cin >> roomNumber;
            occupiedRooms.push_back(roomNumber);
            return roomNumber;

        }; 

        bool getisAvailable(){
            if (occupiedRooms.size() == 0){
                isAvailable = true; 
                cout <<"Room is available" <<endl;
            }
            else {
                for (int i = 0; i < occupiedRooms.size(); i++){
                    if (roomNumber == occupiedRooms[i]){
                        isAvailable = false; 
                        cout <<"Room is occupied" <<endl;
                    }

                    else {
                        isAvailable = true; 
                        cout <<"Room is available" <<endl;
                    }; 

                }; 
            }; 
            return isAvailable;
        }; 

}; 

int main() {
        Room room1; 
            room1.setroomNumber();
            cout <<room1.getisAvailable() <<endl;


        Room room2;
            room2.setroomNumber();
            cout <<room2.getisAvailable() <<endl;
    return 0;
    }; 
