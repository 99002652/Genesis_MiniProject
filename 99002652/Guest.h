#ifndef __GUEST_H__
#define __GUEST_H__
#include<iostream>

class Guest{

    std::string guest_name;
    std::string guest_add;
    long long int phone_no;
    int checkin_date;
    int checkout_date;
    int balance;
    int book_id;
public:
    Guest(){}
    Guest(std::string,std::string,int,int,int,long long int);
    std::string getguest_name();
    std::string getguest_add();
    int getcheckin_date();
    int getcheckout_date();
    long long int getphone_no();
    int getbalance();
    int genbook_id();
    int getbook_id();
    virtual void display()=0;

};
#endif // __GUEST_H__
