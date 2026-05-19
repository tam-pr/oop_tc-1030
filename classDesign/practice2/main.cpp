//A0648580 Tam Padilla
//github: tam-pr

#include "book.h"
#include <iostream>

int main(){
    
    Book book1; 
    book1.printBookInfo(); 

    cout <<endl; 

    Book book2("The Hunger Games", "Suzanne Collins", 384); 
    book2.printBookInfo(); 
    book2.openBook(); 
    book2.nextPage();

    cout <<endl; 
    book2.printBookInfo(); 
    cout <<endl; 

    book2.previousPage(); 
    book2.printBookInfo();

    cout << endl; 
    book2.goToPage(55); 
    book2.printBookInfo(); 

    cout<<endl; 
    Book book3; 
    book3.makeCopy(book2); 
    book3.printBookInfo(); 

    return 0; 
};
