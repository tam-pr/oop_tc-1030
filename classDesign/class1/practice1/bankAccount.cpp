#include "bankAccount.h"
#include <iostream>
#include <string>

using namespace std; 

bankAccount::bankAccount(){
    this->accountNumber = "0000"; 
    this->ownerName = "No Name"; 
    this->accountBalance = 0; 
};

bankAccount::bankAccount(string accountNumber, string ownerName, double balance){
    setupAccount(accountNumber, ownerName, balance); 
};

void bankAccount::setupAccount(string accountNumber, string ownerName, double accountBalance){
    if(accountNumber.length() == 4 && accountNumber.length() <5){
        this->accountNumber = accountNumber; 
    }else{
        this->accountNumber = "0000";
    }; 

    if(ownerName.length()>0){
        this->ownerName = ownerName; 
    }else{
        this->ownerName = "No Name"; 
    };

    this->accountBalance= accountBalance; 
}; 

void bankAccount::printAccountInfo(){
    cout << "Account Number: "+ accountNumber  
    << " | Account Owner Name: "+ ownerName 
    << " | Account Balance: "+ to_string(accountBalance) <<endl;   
}; 

string bankAccount::getAccountNumber(){
    return accountNumber; 
}; 

string bankAccount::getOwnerName(){
    return ownerName; 
};

double bankAccount::getBalance(){
    return accountBalance; 
}; 

void bankAccount::deposit(double deposit){
    this->accountBalance+=deposit;  
}; 

void bankAccount::withdraw(double withdraw){
    this->accountBalance-=withdraw; 
}; 

void bankAccount::transfer(bankAccount& account, double transfer){ 
    if(this->accountBalance>=transfer){
        this->withdraw(transfer); 
        account.deposit(transfer); 
    }
}; 