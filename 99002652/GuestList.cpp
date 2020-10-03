#include<iostream>
#include"GuestList.h"
#include"Rooms.h"
#include"Guest.h"

void Guestlist::addGuest(std::string name,std::string add,long long int phno,
int ckin,int cko,int bal,int bkid)
{Guest_list.push_back(Rooms('Y',100,name,add,phno,ckin,cko,bkid));}

void Guestlist::removeGuestbyBook_id(int bkid){
std::list<Rooms>::iterator iter;
for(iter=Guest_list.begin();iter!=Guest_list.end();++iter)
    {
        if(iter->getbook_id()==bkid)
            break;
    }
    if(iter!=Guest_list.end())
    {
        Guest_list.erase(iter);
    }
}
Rooms* Guestlist::findRoomsByBook_id(int bkid){
std::list<Rooms>::iterator iter;
for(iter=Guest_list.begin();iter!=Guest_list.end();++iter)
    {
        if(iter->getbook_id()==bkid)
        {
            iter->display();
            return &(*iter);
        }
std::cout<<"Not Found In Database\n";
}
return NULL;
}



void Guestlist::displayAll(){
std::list<Rooms>::iterator iter;
for(iter=Guest_list.begin();iter!=Guest_list.end();++iter)
{
    iter->display();
}
}
