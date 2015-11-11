#include <iostream>
#include <string>
#include <vector>

#include "Item.h"
#include "Room.h"
#include "Player.h"
#include "Door.h"


int main()
{
	//setup of room
	Room room1("Room with a key on the floor");

	Item key1("Key",true);

	Door door1();

	room1.addDoorToRoom(door1);

	room1.addItemToRoomInventory(key1);

	std::cout << room1.getDescription();


	return 0;
}