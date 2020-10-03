#include"Rooms.h"
#include<iostream>
using namespace std;
Rooms::Rooms(){availibility=avail_set();}
Rooms::Rooms(char ac,int price,std::string n,std::string ad,int ci_date,int co_date,int bal,long long int ph)
:AC(ac),rate_perday(price),Guest(n,ad,ci_date,co_date,bal,ph){availibility=avail_set();}
char Rooms::getAC_status(){return AC;}
int Rooms::getrate_perday(){return rate_perday;}
int Rooms::getavailibility(){return availibility;}
int Rooms::avail_set(){static int availibility=10;availibility--;}
void Rooms::display()
{
    cout<<endl<<getbook_id()<<"   ";
    cout<<getguest_name()<<"    ";
    cout<<getguest_add()<<"     ";
    cout<<getcheckin_date()<<"      ";
    cout<<getcheckout_date()<<"     ";
    cout<<getphone_no()<<"      ";
    cout<<getbalance()<<"       ";
    cout<<room_no<<endl;

}
/*
int main()
{
    Rooms r('Y',500);
    cout<<r.getavailibility()<<endl;
    cout<<r.getrate_perday()<<endl;
    cout<<r.getAC_status()<<endl;
    Rooms r1('N',400);
    cout<<r1.getavailibility()<<endl;
    cout<<r1.getrate_perday()<<endl;
    cout<<r1.getAC_status()<<endl;
    Rooms r2('N',600);
    cout<<r2.getavailibility()<<endl;
    cout<<r2.getrate_perday()<<endl;
    cout<<r2.getAC_status()<<endl;
        Rooms r3('N',400);
    cout<<r3.getavailibility()<<endl;
    cout<<r3.getrate_perday()<<endl;
    cout<<r3.getAC_status()<<endl;
        Rooms r5('N',400);
    cout<<r5.getavailibility()<<endl;
    cout<<r5.getrate_perday()<<endl;
    cout<<r5.getAC_status()<<endl;
        Rooms r4('N',400);
    cout<<r4.getavailibility()<<endl;
    cout<<r4.getrate_perday()<<endl;
    cout<<r4.getAC_status()<<endl;
    return 0;
}*/
