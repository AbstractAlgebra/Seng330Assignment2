//
//  main.cpp
//  GameUnitTests
//
//  Created by Jagger Cox on 2015-11-14.
//  Copyright © 2015 seng330. All rights reserved.
//

#include "gtest/gtest.h"
#include "Door.h"
#include "Item.h"
#include "Player.h"
#include "Room.h"
#include "add.h"


//Trying out my first, very basic test
TEST (Seng330Assignment2, InitialTest){
    EXPECT_TRUE(true);
    EXPECT_EQ(addition(1,1),2);
}

TEST (Seng330Assignment2, RoomDescriptionTest){
    Room r1("test room");
    EXPECT_EQ(r1.getDescription(),"test room");
}

TEST (Seng330Assignment2, ItemDescriptionTest){
    Item i1("test item",true);
    EXPECT_EQ(i1.getDescription(),"test item");
}

TEST (Seng330Assignment2, ItemComparisonTest){
    Item i1("test",false);
    Item i2("test",false);
    EXPECT_EQ(i2,i2);
}

TEST (Seng330Assignment2, DoorTest){
    Door d1;
    EXPECT_TRUE(d1.isLocked());
    d1.unlock();
    EXPECT_FALSE(d1.isLocked());
}



int main(int argc, char * argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}