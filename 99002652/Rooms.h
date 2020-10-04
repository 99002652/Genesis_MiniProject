#ifndef __ROOMS_H__
#define __ROOMS_H__
#include"Guest.h"
class Rooms:public Guest{
    int room_no[10]={100,101,102,103,104,105,106,107,108,109};
    char a_c;
    int rate_perday;
    int availibility;
public:
    Rooms();
    Rooms(char,std::string,std::string,int,int,int,long long int);
    char getAC_status();
    int getrate_perday();
    int getavailibility();
    int avail_set();
    void display();
    void read_record();
    void update_record();
    int setroom();
    int getroom();
};
#endif // __ROOMS_H__
