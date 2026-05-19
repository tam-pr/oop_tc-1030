#ifndef CLOCK_H
#define CLOCK_H

class Clock {

private:
    int hr;
    int min;
    int sec;

public:
    Clock();
    Clock(int hr, int min, int sec);

    int getHours(); //hw
    int getMinutes();  //hw
    int getSeconds(); //hw 

    void setTime(int hr, int min, int sec);
    void printTime();
    void incrementHours();
    void incrementMinutes();
    void incrementSeconds(); 

    bool equalTime(Clock reloj); 

    void makeCopy(Clock reloj); 
    
    Clock getCopy(); 
};

#endif