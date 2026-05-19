//A0648580 Tam Padilla
//github: tam-pr

#include "bankAccount.h"
#include <iostream>

using namespace std; 

int main(){
    bankAccount account1("0001","Test User", 0); 
    account1.printAccountInfo(); 
    cout << account1.isEmpty() <<endl; 

    cout<<endl; 

    bankAccount account2("0002", "Tamara Padilla", 1000); 
    account2.printAccountInfo(); 

    account2.deposit(350); 
    account2.printAccountInfo(); 
    cout<<endl;

    account2.transfer(account1, 500); 
    account1.printAccountInfo(); 
    account2.printAccountInfo(); 
    cout<<endl; 

    bankAccount account3; 
    account3 = account2.getCopy(); 
    account3.withdraw(10); 
    account3.printAccountInfo(); 
    cout<<endl; 

    bankAccount account4; 
    account4.makeCopy(account3);
    account4.printAccountInfo(); 
 
    return 0;  
}