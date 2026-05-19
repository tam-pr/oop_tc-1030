//A0648580 Tam Padilla
//github: tam-pr

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class bankAccount{

    private: 
        string accountNumber; 
        string ownerName; 
        double accountBalance;

    public: 
        bankAccount(); 
        bankAccount(string, string, double); 

        void setupAccount(string accountNumber, string ownerName, double balance); 

        string getAccountNumber(); 
        string getOwnerName(); 
        double getBalance(); 
        
        void setOwnerName(string); 
        void deposit(double); 
        void withdraw(double); 

        void transfer(bankAccount&, double); 
        void printAccountInfo(); 

        bool isEmpty(); 
        
        void makeCopy(bankAccount); 
        bankAccount getCopy(); 

}; 

#endif 