//A0648580 Tam Padilla
//github: tam-pr

#ifndef BOOK_H
#define BOOK_H 
#include <string>
using namespace std; 
 
class Book{

    private: 
        string title; 
        string author; 
        int totalPages;
        int currentPage; 
        bool isOpen; 

    public: 
        Book(); 
        Book(string,string,int);

        void setupBook(string,string,int);
        void printBookInfo();  

        string getTitle(); 
        string getAuthor(); 
        int getTotalPages(); 
        int getCurrentPage(); 
        bool getisOpen(); 

        void openBook(); 
        void closeBook(); 


        void nextPage(); 
        void previousPage(); 
        void goToPage(int); 

        bool isFinished(); 

        void makeCopy(Book);
        Book getCopy(); 

}; 

#endif