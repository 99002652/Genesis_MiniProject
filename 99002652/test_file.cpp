#include "Rooms.h"
#include "gtest/gtest.h"


TEST(Rooms,ParameterConstructor)
{
    Rooms r1('Y',"Nishant","Patna",2109,10,500,9835407419);
    Rooms r2('Y',"abhishek","Bangalore",1109,5,800,9999499999);
    EXPECT_EQ('Y',r1.getAC_status());
    EXPECT_EQ("Nishant",r1.getguest_name());
    EXPECT_EQ("Patna",r1.getguest_add());
    EXPECT_EQ(2109,r1.getcheckin_date());
    EXPECT_EQ(10,r1.getdays());
    EXPECT_EQ(5000,r1.getbalance());
    EXPECT_EQ(100,r1.getroom());
    EXPECT_EQ(9835407419,r1.getphone_no());
    EXPECT_EQ(1,r1.getbook_id());
    EXPECT_EQ('Y',r2.getAC_status());
    EXPECT_EQ("abhishek",r2.getguest_name());
    EXPECT_EQ("Bangalore",r2.getguest_add());
    EXPECT_EQ(1109,r2.getcheckin_date());
    EXPECT_EQ(5,r2.getdays());
    EXPECT_EQ(4000,r2.getbalance());
    EXPECT_EQ(101,r2.getroom());
    EXPECT_EQ(9999499999,r2.getphone_no());
    EXPECT_EQ(2,r2.getbook_id());
}
TEST(Rooms,ParameterConstructo)
{
    Rooms r3('Y',"Labib","Kochi",2009,1,500,88888888);
    Rooms r4('Y',"Shekhar","Chennai",1109,2,800,9777777777);
    EXPECT_EQ('Y',r3.getAC_status());
    EXPECT_EQ("Labib",r3.getguest_name());
    EXPECT_EQ("Kochi",r3.getguest_add());
    EXPECT_EQ(2009,r3.getcheckin_date());
    EXPECT_EQ(1,r3.getdays());
    EXPECT_EQ(500,r3.getbalance());
    EXPECT_EQ(102,r3.getroom());
    EXPECT_EQ(88888888,r3.getphone_no());
    EXPECT_EQ(3,r3.getbook_id());
    EXPECT_EQ('Y',r4.getAC_status());
    EXPECT_EQ("Shekhar",r4.getguest_name());
    EXPECT_EQ("Chennai",r4.getguest_add());
    EXPECT_EQ(1109,r4.getcheckin_date());
    EXPECT_EQ(2,r4.getdays());
    EXPECT_EQ(1600,r4.getbalance());
    EXPECT_EQ(103,r4.getroom());
    EXPECT_EQ(9777777777,r4.getphone_no());
    EXPECT_EQ(4,r4.getbook_id());
}
