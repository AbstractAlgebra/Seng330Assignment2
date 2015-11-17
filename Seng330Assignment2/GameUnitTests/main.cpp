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


/*!
Here is a a sample test, that just tests an addition function
 */
TEST (Seng330Assignment2, InitialTest){
    EXPECT_TRUE(true);
    EXPECT_EQ(addition(1,1),2);
}
/*!
 Here is a a test that verifies the room description is properly set by the constructor.
 And we also check if the getDescription function works.
 */
TEST (Seng330Assignment2, RoomDescriptionTest){
    Room r1("test room");
    EXPECT_EQ(r1.getDescription(),"test room");
}
/*!
 Here is a test that verifies that the item description is properly set by the constructor,
 and that the getDescription method works
 */
TEST (Seng330Assignment2, ItemDescriptionTest){
    Item i1("test item",true);
    EXPECT_EQ(i1.getDescription(),"test item");
}

/*!
 Here is a test that verifies that items with the same description are known to be equal
 */
TEST (Seng330Assignment2, ItemComparisonTest){
    Item i1("test",false);
    Item i2("test",false);
    EXPECT_EQ(i2,i2);
}

/*!
 Here is a test that tests that doors start off locked and can unlock properly
 */
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