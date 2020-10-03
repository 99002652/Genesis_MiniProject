#include"Guest.h"
#include<iostream>
using namespace std;

Guest::Guest(std::string n,std::string ad,int ci_date,int co_date,int bal,long long int ph):
guest_name(n),guest_add(ad),checkin_date(ci_date),checkout_date(co_date),balance(bal),phone_no(ph){
    book_id=genbook_id();}

std::string Guest::getguest_name(){return guest_name;}
std::string Guest::getguest_add(){return guest_add;}
int Guest::getcheckin_date(){return checkin_date;}
int Guest::getcheckout_date(){return checkout_date;}
long long int Guest::getphone_no(){return phone_no;}
int Guest::getbalance(){return balance;}
int Guest::genbook_id(){static int book_id=0;book_id++;}
int Guest::getbook_id(){return book_id;}
/*int main(){

Guest g1("Nishant","Patna",2709,2710,5000,9835407419);
std::cout<<g1.getphone_no()<<std::endl;
std::cout<<g1.getbook_id()<<std::endl;;
Guest g2("Nishant","Patna",2709,2710,5000,9835407419);
std::cout<<g2.getphone_no()<<std::endl;
std::cout<<g2.getbook_id()<<std::endl;;


return 0;}*/
