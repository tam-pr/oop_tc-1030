#include "bankAccount.h"
#include <iostream>

using namespace std; 

int main(){
    bankAccount account1("0001","Test User", 100); 
    account1.printAccountInfo(); 

    cout<<endl; 

    bankAccount account2("0002", "Tamara Padilla", 1000); 
    account2.printAccountInfo(); 

    account2.deposit(350); 
    account2.printAccountInfo(); 
    cout<<endl;

    account2.transfer(account1, 500); 
    account1.printAccountInfo(); 
    account2.printAccountInfo(); 
 
    return 0;  
}