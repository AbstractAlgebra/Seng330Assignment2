#include "Item.h"
#include "Room.h"
#include "Door.h"

#include <algorithm>
#include <string>
#include <vector>



Room::Room(const std::string& description)
	:description(description)
{
	this->inventory = std::vector<Item>();
	this->doors = std::vector<Door>();
}

//This method adds a door to the room
void Room::addDoorToRoom(Door door){
	doors.push_back(door);

}

//This method removes an item passed in from the room inventory
void Room::removeFromRoomInventory(const Item& item)
{
	std::remove(inventory.begin(), inventory.end(), item);
}

//This method adds an item to the room inventory
void Room::addItemToRoomInventory(const Item& item){
	inventory.push_back(item);
}

//This method gets the description of a room
const std::string& Room::getDescription() const
{
	return description;
}
