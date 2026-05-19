#include "clock.h"
#include <iostream>
#include <string>

using namespace std; 

Clock::Clock() {
    this->hr = 12;
    this->min = 0;
    this->sec = 0;
}

Clock::Clock(int hr, int min, int sec) {
    setTime(hr,min,sec); 
}

void Clock::setTime(int hr, int min, int sec) {

    if(hr >= 0 && hr < 24) {
        this->hr = hr;
    }
    else {
        this->hr = 12;
    }

    if(min >= 0 && min < 60) {
        this->min = min;
    }
    else {
        this->min = 0;
    }

    if(sec >= 0 && sec < 60) {
        this->sec = sec;
    }
    else {
        this->sec = 0;
    }
}

void Clock::printTime(){
    string strHr = this->hr<10?"0"+ to_string(this->hr):to_string(this->hr);
    string strMin = this->min<10?"0"+ to_string(this->min):to_string(this->min);
    string strSec = this->sec<10?"0"+ to_string(this->sec):to_string(this->sec);

    cout << strHr <<":"<< strMin <<":"<< strSec << endl; 
    
}

int Clock::getHours(){
    return this->hr; 
}

int Clock::getMinutes(){
    return this->min; 
}

int Clock::getSeconds(){
    return this->sec; 
}

void Clock::incrementHours(){
    //if (this->hr <23){
        //this->hr+=1; 
    //}
    //else{
        //this->hr=0; 
    //}

    this->hr = ++this->hr%24; 
}; 

void Clock::incrementMinutes(){
    this->min = ++this->min%60; 
    if(this->min ==0){
        incrementHours(); 
    }; 
}; 

void Clock::incrementSeconds(){
    this->sec = ++this->sec%60; 
    if(this->sec ==0){
        incrementMinutes(); 
    }
}; 

bool Clock::equalTime(Clock reloj){
    return reloj.hr == this->hr && reloj.min == this->min && reloj.sec == this->sec; 
}; 

void Clock::makeCopy(Clock reloj){
    this->hr = reloj.hr; 
    this->min = reloj.min; 
    this->sec = reloj.sec;
}; 

Clock Clock::getCopy(){
    return Clock(this->hr, this->min, this->sec); 
}; 



