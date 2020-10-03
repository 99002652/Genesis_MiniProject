#ifndef __ROOMS_H__
#define __ROOMS_H__
#include"Guest.h"
#define max 10
class Rooms:public Guest{
    int room_no;
    char AC;
    int rate_perday;
    int availibility;
public:
    Rooms();
    Rooms(char,int,std::string,std::string,int,int,int,long long int);
    char getAC_status();
    int getrate_perday();
    int getavailibility();
    int avail_set();
    void display();
};
#endif // __ROOMS_H__
