#include"Rooms.h"
#include"Guest.h"
#include<iostream>
#include"GuestList.h"
#include<stdlib.h>

using namespace std;
void menu(Guestlist);
void checkin(Guestlist);

int main()
{
    Guestlist g;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"                         Hotel Management                            "<<endl;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    menu(g);

    return 0;
}
void checkin(Guestlist g)
{
        int a=g.avail();
        if ((a)>0){
        cout<<"The no of rooms available is :"<<(a)<<endl;
        cout<<"to continue booking press 1"<<endl;
        int cont;
        cin>>cont;
        if(cont==1)
        {
            string name;
            cout<<"Enter your Name"<<endl;
            cin>>name;
            string address;
            cout<<"Enter your Address"<<endl;
            cin>>address;
            long long int phno;
            cout<<"Enter your Phone NO"<<endl;
            cin>>phno;
            int ckin;
            cout<<"Enter check in date in DDMMYY"<<endl;
            cin>>ckin;
            int ckout;
            cout<<"Enter check Out date DDMMYY"<<endl;
            cin>>ckout;

            g.addGuest(name,address,phno,ckin,ckout,100);
            cout<<"CHECK IN SUCCESSFUL Booking ID ";
            g.displayAll();
            menu(g);
        }
        }
        else{cout<<"No Rooms available";}

}
void menu(Guestlist g)
{
    cout<<endl<<"1:Check In"<<endl;
    cout<<"2:Check Out"<<endl;
    cout<<"3:Display all data"<<endl;
    cout<<"4:Find Guest by Booking Id"<<endl;
    cout<<"5:Exit"<<endl;
    int selection;
    cin>>selection;
    if(selection==1)
    {
        checkin(g);
    }
    else if(selection==2)
    {
        cout<<"Enter the Booking ID to checkout"<<endl;
        int b_id;
        cin>>b_id;
        g.removeGuestbyBook_id(b_id);
        menu(g);
    }
    else if(selection==3)
    {
        g.displayAll();
        menu(g);
    }
    else if(selection==4)
    {
        cout<<"Enter the Booking Id for details"<<endl;
        int b_id;
        cin>>b_id;
        g.findGuestByBook_id(b_id);
        menu(g);
    }
    else if(selection==5)
    {
        exit(0);
    }
    else{cout<<"Invalid Selection"<<endl;}

}


