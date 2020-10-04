#include<iostream>
#include"GuestList.h"
#include"Rooms.h"
#include"Guest.h"

void Guestlist::addGuest(std::string name,std::string add,long long int phno,
int ckin,int cko,int rat,char AC)
{Guest_list.push_back(Rooms(AC,name,add,ckin,cko,rat,phno));}

int Guestlist::avail(){int a=Guest_list.size();return (10-a);}

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
Rooms* Guestlist::findGuestByBook_id(int bkid){
std::list<Rooms>::iterator iter;
int c=0;
for(iter=Guest_list.begin();iter!=Guest_list.end();++iter)
    {
        if(iter->getbook_id()==bkid)
        {
            std::cout<<"Data Found"<<std::endl;
            iter->display();
            return &(*iter);
            c++;
        }
    }
if(c==0){std::cout<<"Not Found In Database\n";}
return NULL;
}



void Guestlist::displayAll(){
std::list<Rooms>::iterator iter;
for(iter=Guest_list.begin();iter!=Guest_list.end();++iter)
{
    iter->display();
}
}
