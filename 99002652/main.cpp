#include"Rooms.h"
#include"Guest.h"
#include<iostream>

using namespace std;



int main()
{
    static int x=0;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"                         Hotel Management                            "<<endl;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"1:Check In"<<endl;
    cout<<"2:Check Out"<<endl;
    int selection;
    cin>>selection;
    if(selection==1)
    {
        Rooms r;
        int a=r.getavailibility();
        if ((a+1)>0){
        cout<<"The no of rooms available is :"<<(a+1)<<endl;
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
            Rooms g1('Y',100,name,address,ckin,ckout,1000,phno);
            cout<<"CHECK IN SUCCESSFUL Booking ID "<<g1.genbook_id();
            x++;

        }
        }
        else{cout<<"No Rooms available";}

    }
    else if(selection==2)
    {

    }
    else{cout<<"Invalid Selection"<<endl;}

    return 0;
}
