#ifndef __HOTELADMIN_H__
#define __HOTELADMIN_H__
class HotelAdmin:public Guest,public Rooms
public:
    void checkin();
    void available_rooms();
    void customer_search(std::string);
    void checkout(int);
    void guest_summary();
};
#endif // __HOETELADMIN_H__k
