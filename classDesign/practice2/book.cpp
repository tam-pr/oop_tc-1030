//A0648580 Tam Padilla
//github: tam-pr

#include "book.h"
#include <iostream>
using namespace std; 

Book::Book(){
    this->title = "Sin título"; 
    this->author = "Desconocido"; 
    this->totalPages = 0; 
    this->currentPage = 0; 
    this->isOpen = false; 
}; 

Book::Book(string title, string author, int totalPages){
    setupBook(title, author, totalPages); 
}; 

void Book::setupBook(string title, string author, int totalPages){
    if(title.length()>0){
        this->title = title; 
    }else{
        this->title = "Sin título"; 
    }; 

    if(author.length()>0){
        this->author = author; 
    }else{
        this->author = "Desconocido"; 
    };

    if(totalPages>0){
        this->totalPages = totalPages; 
    }else{
        this->totalPages = 0; 
    }; 

    this->currentPage=0;

}; 

void Book::printBookInfo(){
    cout << "Titulo: " << this->title << " | Autor: " << this->author <<" | Página: " 
    << this->currentPage << "/" << this->totalPages << " | Abierto: " << (this->isOpen?"Si":"No") << endl; 
}; 

string Book::getTitle(){
    return this->title; 
}; 

string Book::getAuthor(){
    return this->author; 
};

int Book::getTotalPages(){
    return this->totalPages; 
}; 

int Book::getCurrentPage(){
    return currentPage; 
}; 

bool Book::getisOpen(){
    return isOpen; 
}; 

void Book::openBook(){
    this->isOpen = true;
    if(this->currentPage == 0 && this->totalPages >0){
        this->currentPage = 1; 
        
    };   
}; 

void Book::closeBook(){
    this->isOpen = false;
}; 

void Book::nextPage(){
    if(this->currentPage>=0 && this->currentPage<= this->totalPages){
        this->currentPage++; 
    }; 
}; 

void Book::previousPage(){
    if(this->currentPage>0 && this->currentPage <this->totalPages){
        this->currentPage--; 
    }
}; 

void Book::goToPage(int currentPage){
    if(currentPage < totalPages && currentPage >0){
        this->currentPage = currentPage; 
    }; 
}; 

bool Book::isFinished(){
    return this->currentPage == totalPages; 
}; 

void Book::makeCopy(Book book){
    this->title = book.title; 
    this->author = book.author; 
    this->totalPages = book.totalPages; 
    this->currentPage = book.currentPage; 
    this->isOpen = book.isOpen; 

}; 

Book Book::getCopy(){
    return Book(this->title, this->author, this->totalPages); 
}; 

