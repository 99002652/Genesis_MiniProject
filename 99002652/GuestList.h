#ifndef __GUESTLIST_H__
#define __GUESTLIST_H__
#include"Rooms.h"
#include<list>
class Guestlist{
    std::list<Rooms> Guest_list;
public:
    void addGuest(std::string,std::string,long long int,int,int,int,int);
    void removeGuestbyBook_id(int);
    Rooms* findRoomsByBook_id(int);
    void displayAll();


};
#endif // __GUESTLIST_H__
